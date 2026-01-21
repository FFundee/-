#include <cmath>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a; 
    double volume;  
    double sideArea;  

    cout << "Введите длину ребра куба: ";
    cin >> a;

    volume = pow(a, 3);  

    sideArea = 4 * pow(a, 2);  

    cout << "Объём куба: " << volume << endl;
    cout << "Площадь боковой поверхности куба: " << sideArea << endl;

    return 0; 
}