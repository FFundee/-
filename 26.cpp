#include <cmath>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float radius; 
    float diameter; 
    cout << "Введите радиус окружности: ";
    cin >> radius;
    diameter = 2 * radius;
    cout << "Диаметр окружности равен: " << diameter << endl;
    return 0;
}