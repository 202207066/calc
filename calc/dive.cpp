
#include "basic.h"
int dive(int __x, int  __y)
{
	int cnt = 0;
	while (__x > __y) {
		sub(__x, __y);
		cnt++;
	}
	return cnt;
}
