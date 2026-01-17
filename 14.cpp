#include <iostream>
#include <Windows.h>

int main() 
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a;
	int b;
	int c;
	std::cout << "Введите 3 числа: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << a << "  " << b << "  " << c;
}

