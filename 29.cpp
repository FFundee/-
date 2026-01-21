#include <Windows.h>
#include <iostream>
#include <iomanip>  
#include <cmath>   
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double r;                   
    double length;             
    double area; 
    double M_PI;
    cout << "Введите радиус окружности: ";
    cin >> r;
    M_PI = 2 * r;
   length = 2 * M_PI * r;
    area = M_PI * r * r;
    cout << fixed << setprecision(4);
    cout << "Длина окружности: " << length << endl;
    cout << "Площадь круга: " << area << endl;

    return 0;