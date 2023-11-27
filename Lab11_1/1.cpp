#include <iostream>
using namespace std;

int main()
{
    setlocale(0,".1251");
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    cout << "Введіть номер місяця:\n";
    int n;
    cin >> n;
    cout << "Кількість днів: " << arr[n - 1] << endl;
    cin.ignore();
    return 0;
}

