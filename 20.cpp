#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a, x, r, d;
    std::cout << "Введите число a: ";
    std::cin >> a;
    double b = sin(3 * a);
    if (a >= 0)
    {
        r = sqrt((2*a+b)/3.56);
        std::cout << "Получается: " << a * a + 10 / r << "\n";
    }
    else {
        std::cout << "Невозможно вычислить корень из отрицательного числа." << "\n";
    }
    std::cout << "Введите число x: ";
    std::cin >> x;
    if (x >= 0)
    {
        d = sqrt(1+x);
        double c = sin((3.2 + d) / (5 * x));
        std::cout << "Получается: " << c<<"\n";
    }
    else {
        std::cout << "Невозможно вычислить корень из отрицательного числа." << "\n";
    }

    return 0;
}