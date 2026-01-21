#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a1, a2, a3, b1, b2;     cout << "Введите цифру единиц трёхзначного числа (a1): ";
    cin >> a1;
    cout << "Введите цифру десятков трёхзначного числа (a2): ";
    cin >> a2;
    cout << "Введите цифру сотен трёхзначного числа (a3): ";
    cin >> a3;
    cout << "Введите цифру единиц двузначного числа (b1): ";
    cin >> b1;
    cout << "Введите цифру десятков двузначного числа (b2): ";
    cin >> b2;
    int sum_units = a1 + b1;
    int units_result = sum_units % 10;     
    int carry1 = sum_units / 10;              
    int sum_tens = a2 + b2 + carry1;
    int tens_result = sum_tens % 10;       
    int carry2 = sum_tens / 10;            
    int hundreds_result = a3 + carry2;    
    cout << "Цифры числа-суммы: " << hundreds_result << " (сотни), " << tens_result << " (десятки), "<< units_result << " (единицы)" << endl;

    return 0;
}