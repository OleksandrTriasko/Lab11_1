#include <vector>
#include <cmath>
#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть номер завдання: ";
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
			if (i > 0 && !(arr[i] % 5) && !(arr[i - 1] % 5))
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
		cout << "\nВведіть значення k: ";
		int k, res=0;
		cin >> k;
		const vector<int> arr = { 100, 200, 500, 1000, 1200, 1400, 1500, 2000, 3000 };
		for (int i1 = 0; i1 < 9; i1++) 
		{
			int s1 = arr[i1];
			if (s1 == k)
				res++;
			else if (s1 > k)
				break;

			for (int i2 = i1 + 1; i2 < 9; i2++) 
			{
				int s2 = s1 + arr[i2];
				if (s2 == k)
					res++;
				else if (s2 > k)
					break;

				for (int i3 = i2 + 1; i3 < 9; i3++) 
				{
					int s3 = s2 + arr[i3];
					if (s3 == k)
						res++;
					else if (s3 > k)
						break;

					for (int i4 = i3 + 1; i4 < 9; i4++) 
					{
						int s4 = s3 + arr[i4];
						if (s4 == k)
							res++;
						else if (s4 > k)
							break;

						for (int i5 = i4 + 1; i5 < 9; i5++) 
						{
							int s5 = s4 + arr[i5];
							if (s5 == k)
								res++;
							else if (s5 > k)
								break;

							for (int i6 = i5 + 1; i6 < 9; i6++) 
							{
								int s6 = s5 + arr[i6];
								if (s6 == k)
									res++;
								else if (s6 > k)
									break;

								for (int i7 = i6 + 1; i7 < 9; i7++) 
								{
									int s7 = s6 + arr[i7];
									if (s7 == k)
										res++;
									else if (s7 > k)
										break;

									for (int i8 = i7 + 1; i8 < 9; i8++) 
									{
										int s8 = s7 + arr[i8];
										if (s8 == k)
											res++;
										else if (s8 > k)
											break;

										for (int i9 = i8 + 1; i9 < 9; i9++) 
										{
											int s9 = s8 + arr[i9];
											if (s9 == k)
												res++;
											else if (s9 > k)
												break;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << "Результат: " << res << endl;
	}
	}
	return 0;
}