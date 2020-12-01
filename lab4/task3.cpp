#include <iostream>
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	int y;
	__asm
	{
		mov eax, 13;
		mov ecx, 2;
		sub edx, edx
			div ecx;
		inc eax;
		mov y, eax
	}
	cout << y << endl;

}
