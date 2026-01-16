#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a = 1;
	int b = 2;
	std::cout << a << "\n";
	std::cout << "" << "\n";
	std::cout << b << "\n";
}