#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a;
    cout << "Введите число a: ";
    cin >> a;
    double a2 = a * a;    
    double a4 = a2 * a2;   
    double a8 = a4 * a4;    
    double a16 = a8 * a8;   
    double a32 = a16 * a16; 
    double a64 = a32 * a32; 
    cout << "Результат: " << a2 << endl;
    cout << "Результат: " << a4 << endl;
    return 0;
}