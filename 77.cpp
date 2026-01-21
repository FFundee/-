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
    int hundreds = number / 100;       
    int tens = (number % 100) / 10;   
    int units = number % 10;           
    int newNumber = hundreds * 100 + units * 10 + tens;
    cout << "Исходное число: " << number << endl;
    cout << "Число после перестановки второй и третьей цифр: " << newNumber << endl;

    return 0;
}