#include <iostream>
#include <Windows.h>
#include <iostream>
#include <Windows.h>
#include <iostream>

using namespace std;

int Sub(int x, int y);

int main()
{
	int a = -2, b = 10;
	cout << Sub(a, b) << endl;
}

int Sub(int x, int y)
{
	_asm
	{
		mov eax, x;
		mov ebx, y;
		sub eax, ebx;
		mov x, eax;
	}
	return x;
}
