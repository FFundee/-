#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a;
	int b;
	int x;
	int y;
	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите x: ";
	std::cin >> x;
	std::cout << "Введите y: ";
	std::cin >> y;
	std::cout <<"\n" << "\t" << "a) " << "2 кг" << " \t" << "б) " << a << " 1" << "  \t" << "в) " << x << " " << y << "\n";
	std::cout <<"\t" << "   13" << " 17" << "  \t" << "   19 " <<" " << b << "  \t" << "   5 " << y;
}