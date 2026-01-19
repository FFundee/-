#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	std::cout << "Введите число x: ";
	std::cin >> x;
	int a;
	std::cout << "Введите число a: ";
	std::cin >> a;
	std::cout<<"\n" << "С x получается: " << 17 * x * x - 6 * x + 13 << "\n";
	std::cout << "С а получается: " << 3 * a * a + 5 * a - 21<<"\n";
}