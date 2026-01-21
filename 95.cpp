#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a1, a2, b1, b2;
    cout << "Введите цифру единиц первого числа (a1): ";
    cin >> a1;
    cout << "Введите цифру десятков первого числа (a2): ";
    cin >> a2;
    cout << "Введите цифру единиц второго числа (b1): ";
    cin >> b1;
    cout << "Введите цифру десятков второго числа (b2): ";
    cin >> b2;
    int sum_units = a1 + b1;
    int units_result = sum_units % 10;    
    int carry = sum_units / 10;          
    int tens_result = a2 + b2 + carry;    
    cout << "Цифры числа-суммы: " << tens_result << " (десятки), " << units_result << " (единицы)" << endl;

    return 0;
}