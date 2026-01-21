#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a1, a2, b; 
    cout << "Введите цифру единиц двузначного числа (a1): ";
    cin >> a1;
    cout << "Введите цифру десятков двузначного числа (a2): ";
    cin >> a2;
    cout << "Введите однозначное число (b): ";
    cin >> b;
    int sum_units = a1 + b;
    int units_result = sum_units % 10;   
    int carry = sum_units / 10;          
    int tens_result = a2 + carry;       
    cout << "Цифры числа-суммы: " << tens_result << " (десятки), " << units_result << " (единицы)" << endl;

    return 0;
}