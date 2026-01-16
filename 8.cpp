#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int num;
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << "Вы ввели число: " << num << "\n";
}