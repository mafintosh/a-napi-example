#include <node_api.h>
#include <stdio.h>

napi_value print (napi_env env, napi_callback_info info) {
  napi_value argv[1];
  size_t argc = 1;

  napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

  if (argc < 1) {
    napi_throw_error(env, "EINVAL", "Too few arguments");
    return NULL;
  }

  char str[1024];
  size_t str_len;

  if (napi_get_value_string_utf8(env, argv[0], (char *) &str, 1024, &str_len) != napi_ok) {
    napi_throw_error(env, "EINVAL", "Expected string");
    return NULL;
  }

  printf("Printed from C: %s\n", str);

  return NULL;
}


napi_value init_all (napi_env env, napi_value exports) {
  napi_value print_fn;
  napi_create_function(env, NULL, 0, print, NULL, &print_fn);
  napi_set_named_property(env, exports, "print", print_fn);
  return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, init_all)
