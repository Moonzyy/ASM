#include <iostream>
#include <Windows.h>
#include <iostream>

using namespace std;

int Fun(int x);

int main()
{
	int x = 13;
	cout << Fun(x) << endl;

}

int Fun(int x)
{
	__asm
	{
		mov eax, x;
		mov ecx, 2;
		sub edx,edx
		div ecx;
		inc eax;
		mov x, eax
	}
	return x;
}
