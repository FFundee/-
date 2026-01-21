#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int number;
    cout << "Введите трёхзначное число: ";
    cin >> number;
    if (number < 100 || number > 999) {
        cout << "Ошибка! Введите число от 100 до 999." << endl;
        return 1;
    }
    int lastDigit = number % 10;    
    int firstTwoDigits = number / 10; 
    int newNumber = lastDigit * 100 + firstTwoDigits;
    cout << "Исходное число: " << number << endl;
    cout << "Полученное число: " << newNumber << endl;

    return 0;
}