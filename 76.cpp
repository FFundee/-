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
    int newNumber = tens * 100 + hundreds * 10 + units;
    cout << "Исходное число: " << number << endl;
    cout << "Число после перестановки первой и второй цифр: " << newNumber << endl;

    return 0;
}