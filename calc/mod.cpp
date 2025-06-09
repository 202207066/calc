#include "basic.h"
int mod(int __x, int __y) {
    if (__y == 0) return 0; 

    int result = __x;
  
    while (result >= __y) {
        result = sub(result, __y);
    }

    return result;
}
