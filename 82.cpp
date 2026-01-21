#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите натуральное число n (n > 99): ";
    cin >> n;
    if (n <= 99) {
        cout << "Ошибка! Число должно быть больше 99." << endl;
        return 1;
    }
    int tens = (n / 10) % 10;
    cout << "а) Число десятков в числе " << n << " равно: " << tens << endl;
    int hundreds = (n / 100) % 10; 
    cout << "б) Число сотен в числе " << n << " равно: " << hundreds << endl;

    return 0;
}