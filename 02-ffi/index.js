'use strict';

const ffi = require('ffi');
const ref = require('ref');
const int = ref.types.int;

const MyLibrary = ffi.Library('mainlib', {
  'fibonacci': [int, [int]]
});

MyLibrary.fibonacci.async(40, (error, response) => console.log(response));