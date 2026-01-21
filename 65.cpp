#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int m;
    int t; 
    cout << "Введите массу в килограммах (M): ";
    cin >> m;
    t = m / 1000;
    cout << "Количество полных тонн: " << t << endl;

    return 0;
}