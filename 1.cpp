#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	std::cout << 15+16 ;
	std::cout << " ";
	std::cout << 3 + 15;
	std::cout << " ";
	std::cout << 39 + 30;
	return 0;
}
