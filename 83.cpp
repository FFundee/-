#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите натуральное число n (n > 999): ";
    cin >> n;
    if (n <= 999) {
        cout << "Ошибка! Число должно быть больше 999." << endl;
        return 1;
    }
    int hundreds = (n / 100) % 10;
    cout << "а) Число сотен в числе " << n << " равно: " << hundreds << endl;
    int thousands = (n / 1000) % 10; 
    cout << "б) Число тысяч в числе " << n << " равно: " << thousands << endl;

    return 0;
}