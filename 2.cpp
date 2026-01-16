#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	std::cout << 14 + 16 << " 2 ";
	std::cout << 3 + 15 << " 2 ";
	std::cout << 39 + 30 << " 2 ";
	return 0;
}