#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double celsius; 
    double fahrenheit; 
    double kelvin; 
    cout << "Введите температуру по шкале Цельсия: ";
    cin >> celsius;
    fahrenheit = 1.8 * celsius + 32;
    kelvin = celsius + 273.15;
    cout << "Температура по шкале Фаренгейта: " << fahrenheit << "°F" << endl;
    cout << "Температура по шкале Кельвина: " << kelvin << "K" << endl;

    return 0;
}