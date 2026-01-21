#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int number;
    cout << "Введите трёхзначное число (все цифры различны): ";
    cin >> number;
    if (number < 100 || number > 999) {
        cout << "Ошибка! Введите число от 100 до 999." << endl;
        return 1;
    }
    int a = number / 100;   
    int b = (number % 100) / 10; 
    int c = number % 10;       if (a == b || b == c || a == c) {
        cout << "Ошибка! Все цифры должны быть различны." << endl;
        return 1;
    }
    int num1 = a * 100 + b * 10 + c;
    int num2 = a * 100 + c * 10 + b; 
    int num3 = b * 100 + a * 10 + c; 
    int num4 = b * 100 + c * 10 + a; 
    int num5 = c * 100 + a * 10 + b; 
    int num6 = c * 100 + b * 10 + a;
    cout << "Исходное число: " << num1 << endl;
    cout << "Перестановки цифр:" << endl;
    cout << "1. " << num2 << endl;
    cout << "2. " << num3 << endl;
    cout << "3. " << num4 << endl;
    cout << "4. " << num5 << endl;
    cout << "5. " << num6 << endl;

    return 0;
}
