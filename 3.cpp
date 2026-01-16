#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a = 50;
	int b = 10;
	std::cout << a << "\n";
	std::cout << b << "\n";
}