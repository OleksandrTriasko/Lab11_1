#include <vector>
#include <cmath>
#include <iostream>
#include "Windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "12:\nВведіть номер завдання: ";
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		cout << "\nВведіть значення n, a1, a2, ..., an: ";
		int n, res = 0;
		cin >> n;
		vector<int> arr;
		arr.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (i > 0)
				if(!(arr[i] % 2) && !(arr[i - 1] % 2))
					res++;
		}
		cout << "Результат: " << res << endl;
		break;
	}
	case 2:
	{
		cout << "\nВведіть значення a, b, k: ";
		int a, b, k;
		cin >> a >> b >> k;
		cout << "Відповідь: ";
		for (int i = a; i <= b; i++)
		{
			int d = 0;
			for (int j = 1; j <= abs(i) + 1; j++)
			{
				if (!(i % j))
					d++;
			}
			if (d == k)
				cout << i << " ";
		}
		cout << endl;
		break;
	}
	case 3:
	{
		cout << "\nВ умові задачі пропущена одна гиря: 300г. Також не вказано, є ВСЬОГО 10 гир чи 10 ВИДІВ гир. \nВведіть 0, якщо гир кожної маси всьго по одній, або 1 - якщо необмежена кількість: ";
		bool b;
		cin >> b;
		cout << "\nВведіть значення k: ";
		int k, res=0;
		cin >> k;
		const int arr[] = {100, 200, 300, 500, 1000, 1200, 1400, 1500, 2000, 3000};
		vector<int> comb(k+1, 0);
		comb[0] = 1;
		if (b)
		{
			for (int i = 0; i < 10; i++)
				for (int j = arr[i]; j <= k; j++)
					comb[j] += comb[j - arr[i]];
		}
		else
		{
			for (int i = 0; i < 10; i++)
				for (int j = k; j >= arr[i]; j--)
					comb[j] += comb[j - arr[i]];
		}
		res = comb[k];
		cout << "Результат: " << res << endl;
	}
	}
	cin.ignore();
	return 0;
}