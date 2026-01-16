#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a = 10-5;
	int b = 50/5;
	int c = 21;
	std::cout << a << "\n";
	std::cout << b << "\n";
	std::cout << c << "\n";
}