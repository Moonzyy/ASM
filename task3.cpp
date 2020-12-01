#include <stdio.h>
using namespace std;

extern "C" void fun(int x, int y)

{
	printf("x = %d y =%d\n", x, y);
}