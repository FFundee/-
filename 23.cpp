#include <iostream>
#include <Windows.h>
#include <cmath>

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const double R = 6350;
    double a, b;
    std::cout << "Введите высоту: ";
    std::cin >> a;
    b = sqrt(2 * R * a + a * a);
    std::cout << "Расстояние до линии горизонта: " << b << " км" << "\n";
    return 0;
}