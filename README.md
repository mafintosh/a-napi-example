# a-native-example

An example Node.js n-api module

```
npm install a-napi-example
```

Used to showcase prebuilds

[![build status](https://travis-ci.org/mafintosh/a-native-example.svg?branch=master)](https://travis-ci.org/mafintosh/a-native-example)
[![Build status](https://ci.appveyor.com/api/projects/status/ulm9iw0vkimeugr3?svg=true)](https://ci.appveyor.com/project/mafintosh/a-native-example)

All prebuilds are build on CI and afterwards downloaded and published in the npm tarball. See [prebuildify-ci](https://github.com/mafintosh/prebuildify-ci) for more.

## Usage

``` js
var print = require('a-napi-example')

print('hello world') // will print "hello world" from C
```

## License

MIT
