# a-native-example

An example Node.js n-api module

```
npm install a-napi-example
```

Used to showcase prebuilds

[![build status](https://travis-ci.org/mafintosh/a-napi-example.svg?branch=master)](https://travis-ci.org/mafintosh/a-napi-example)
[![Build status](https://ci.appveyor.com/api/projects/status/d1j0kq1wjiqticwn/branch/master?svg=true)](https://ci.appveyor.com/project/mafintosh/a-napi-example/branch/master)

All prebuilds are build on CI and afterwards downloaded and published in the npm tarball. See [prebuildify-ci](https://github.com/mafintosh/prebuildify-ci) for more.

## Usage

``` js
var print = require('a-napi-example')

print('hello world') // will print "hello world" from C
```

## License

MIT
