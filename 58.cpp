#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a = 450; 
    double b; 
    b = (a - 32) * 5.0 / 9.0;
    cout << "Температура " << a << "°F соответствует " << b << "°C по шкале Цельсия." << endl;

    return 0;
}