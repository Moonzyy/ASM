#include <iostream>
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	float a1 = 123456789, b1 = 123456788;
	float c1 = a1 - b1;
	double x1 = 123456789, y1 = 123456788;
	double z1 = x1 - y1;
	cout << "float 123456789 - 123456788 =" << c1 << endl;
	cout << "double 123456789 - 123456788 =" << z1 << endl;
	float a2 = 123456788, b2 = 123456787;
	float c2 = a1 - b1;
	double x2 = 123456788, y2 = 123456787;
	double z2 = x1 - y1;
	cout << "float 123456788 - 123456787 ="  << c2 << endl;
	cout << "double 123456788 - 123456787 ="   << z2 << endl;
	return 0;
}