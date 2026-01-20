#include <Windows.h>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a; 
    int P; 

    cout << "Введите длину стороны квадрата: ";
    cin >> a; 
    P = 4 * a; 
    cout << "Периметр квадрата: " << P << endl; 

    return 0;
}