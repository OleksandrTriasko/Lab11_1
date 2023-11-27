#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть координати точки x y та R:" << endl;
	double x, y, R;
	cin >> x >> y >> R;
	if ((x >= 0 && y >= 0 && (x * x + y * y) <= R * R) || (x <= 0 && y <= 0 && y >= -x - R))
		cout << "Так, належить";
	else
		cout << "Ні, не належить";
	cout << endl;
	return 0;
}