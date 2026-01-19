#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a, b;
    std::cout << "Введите длину стороны квадрата: "<<"\n";
    std::cin >> a;
    b = 4 * a;
    std::cout << "Периметр квадрата равен: " << b << "\n";
    return 0;
}