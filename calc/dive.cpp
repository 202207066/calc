#include "basic.h"
  3 int dive(int __x, int  __y)
  4 {
  5     int cnt = 0;
  6     while (__x >= __y) {
  7         __x = sub(__x, __y);
  8         cnt++;
  9     }
 10     return cnt;
 11 }

