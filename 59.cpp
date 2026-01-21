#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;
    cout << "Введите значение переменной a: ";
    cin >> a;
    cout << "Введите значение переменной b: ";
    cin >> b;
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    a = a + b;   
    b = a - b;    
    a = a - b;    
    cout << "После обмена: a = " << a << ", b = " << b << endl;

    return 0;
}