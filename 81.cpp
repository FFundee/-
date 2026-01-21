#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите натуральное число n (n > 9): ";
    cin >> n;
    if (n <= 9) {
        cout << "Ошибка! Число должно быть больше 9." << endl;
        return 1;
    }
    int units = n % 10; 
    cout << "а) Число единиц в числе " << n << " равно: " << units << endl;
    int tens = (n % 100 - n % 10) / 10; 
    cout << "б) Число десятков в числе " << n << " равно: " << tens << endl;

    return 0;
}