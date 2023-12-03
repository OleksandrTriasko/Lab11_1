#include <iostream>
#include <cmath>
using namespace std;

inline double f6(int k)
{
	return 2 * sin(k - 4.5) / (sin(4.0) - k);
}
inline double f7(int k)
{
	return 3 * log(abs(k - 1.5)) / log10(abs(k - 3.7) + 8);
}

int main()
{
	double a = 0, b = 0, z;
	for (int i = 2; i < 9; i++)
		a += f6(i);
	for (int i = 2; i < 12; i++)
		b += f7(i);
	z = a * b;
	cout << "i=2" << endl
		<< "a=" << a << endl
		<< "b=" << b << endl
		<< "z=" << z << endl;
}