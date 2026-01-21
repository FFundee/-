#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double y; 
    cout << "Введите угол y (0 ≤ y < 360): ";
    cin >> y;
    if (y < 0 || y >= 360) {
        cout << "Ошибка: угол должен быть в диапазоне [0, 360)." << endl;
        return 1;
    }
    double total_minutes = y * 2;     int full_hours = static_cast<int>(total_minutes / 60); // целочисленное деление
    int full_minutes = static_cast<int>(total_minutes) % 60; // остаток от деления
    cout << "Число полных часов, прошедших с начала суток: " << full_hours << endl;
    cout << "Число полных минут, прошедших с начала суток: " << full_minutes << endl;

    return 0;
}