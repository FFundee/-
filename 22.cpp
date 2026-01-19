#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a, b;
    std::cout << "Введите радиус окружности: "<<"\n";
    std::cin >> a;
    b = 2 * a;
    std::cout << "Диаметр окружности равен: " << b << "\n";
    return 0;
}