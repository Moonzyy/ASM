#include <stdio.h>
using namespace std;

extern "C" int tass(int x);

int main()
{
	printf("x = 2 y = %d", tass(2));
	printf(" ");
	printf("x = 10 y = %d", tass(10));
	return 0;
}