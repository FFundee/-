#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a;
	std::cout << "Введите число: ";
	std::cin>> a;
	std::cout << "Следующее за числом " << a << " число - " << a + 1<< "\n";
	std::cout << "Для числа " << a << " предыдущее число - " << a - 1<< "\n";
}