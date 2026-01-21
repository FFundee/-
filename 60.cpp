#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b, c;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    cout << "Исходные значения: a = " << a << ", b = " << b << ", c = " << c << endl;
    b = c;    
    a = b;    
    c = a;    
    cout << "Значения после обмена (схема а): a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}