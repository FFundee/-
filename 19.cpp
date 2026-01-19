#include <iostream>
#include <Windows.h>
#include <cmath>

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a, result;
    std::cout << "Введите число a: ";
    std::cin >> a;
    if (a >= 0) 
    {
        result = sqrt(a*a+1);
        std::cout << "Получается: " << a*a+10/result << std::endl;
    }
    else {
        std::cout << "Невозможно вычислить корень из отрицательного числа." << std::endl;
    }

    return 0;
}