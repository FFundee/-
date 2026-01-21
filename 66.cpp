#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int meters;
    int kilometers;    cout << "Введите расстояние в метрах: ";
    cin >> meters;
    kilometers = meters / 1000;
    cout << "Число полных километров: " << kilometers << endl;

    return 0;
}