#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    cout << "12:\nВведіть номер місяця:\n";
    int n;
    cin >> n;
    cout << "Кількість днів: " << arr[n - 1] << endl;
    cin.ignore();
    return 0;
}

