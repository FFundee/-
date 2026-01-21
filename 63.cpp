#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int centimeters;
    cout << "Введите расстояние в сантиметрах: ";
    cin >> centimeters;
    int full_meters = centimeters / 100;
    cout << "Число полных метров: " << full_meters << endl;

    return 0;
}