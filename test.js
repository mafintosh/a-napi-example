var tape = require('tape')
var print = require('./')

tape('does not crash', function (t) {
  print('hello from test')
  t.pass('did not crash')
  t.end()
})
