#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int t;
	int v;
	int x;
	int y;
	std::cout << "Введите t: ";
	std::cin >> t;
	std::cout << "Введите v: ";
	std::cin >> v;
	std::cout << "Введите x: ";
	std::cin >> x;
	std::cout << "Введите y: ";
	std::cin >> y;
	std::cout << "\n" << "\t" << "a) " << "2 10" << " \t" << "б) " << "100 " << t << "  \t" << "в) " << x << " 25" << "\n";
	std::cout << "\t" << "   7 см" << "  \t" << "   1949 " << " " << v << "  \t" << "   "<<x<<" " << y;
}