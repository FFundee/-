#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, x, lastTwoDigits, firstDigit;
    cout << "Введите число n (1 <= n <= 999): ";
    cin >> n;
    if (n < 1 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне [1, 999]." << endl;
        return 1;
    }
    firstDigit = n / 100;
    lastTwoDigits = n % 100;
   x = firstDigit * 100 + lastTwoDigits;
    cout << "Исходное число x: " << x << endl;

    return 0;
}