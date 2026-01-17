#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a;
	int b;
	int c;
	int d;
	std::cout << "Введите 4 числа: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cout << a << " " << b << " " << c << " "<< d;
}

