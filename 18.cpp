#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	std::cout << 3 * 9 + 10 << "  ";
	std::cout << 10 * 5 << "  ";
	std::cout << 3 * 50 << "  ";
	return 0;
}