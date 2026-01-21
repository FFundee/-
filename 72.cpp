#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int number, tens, units, sum, product;
    cout << "Введите двузначное число: ";
    cin >> number;
    if (number < 10 || number > 99) {
        cout << "Ошибка! Введите число от 10 до 99." << endl;
        return 1;
    }
    tens = number / 10;
    units = number % 10;
    sum = tens + units;
    product = tens * units;
    cout << "а) Число десятков в нём: " << tens << endl;
    cout << "б) Число единиц в нём: " << units << endl;
    cout << "в) Сумма его цифр: " << sum << endl;
    cout << "г) Произведение его цифр: " << product << endl;

    return 0;
}