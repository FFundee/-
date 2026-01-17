#include <iostream>
#include <Windows.h>
#include <string>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	using namespace std;
	string name;
	std::cout << "Введите название футбольной команды: ";
	std::cin >> name;
	std::cout << name << " - это чемпион!";
}