#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int number;
    cout << "Введите четырёхзначное число: ";
    cin >> number;
    if (number < 1000 || number > 9999) {
        cout << "Ошибка! Введите число от 1000 до 9999." << endl;
        return 1;
    }
    int digit1 = number / 1000;
    int digit2 = (number % 1000) / 100;
    int digit3 = (number % 100) / 10;
    int digit4 = number % 10;
    int sum = digit1 + digit2 + digit3 + digit4;
    int product = digit1 * digit2 * digit3 * digit4;
    cout << "Исходное число: " << number << endl;
    cout << "Сумма цифр: " << sum << endl;
    cout << "Произведение цифр: " << product << endl;

    return 0;
}