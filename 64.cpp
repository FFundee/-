#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int kilograms; 
    cout << "Введите массу в килограммах: ";
    cin >> kilograms;
    int full_centners = kilograms / 100;
    cout << "Число полных центнеров: " << full_centners << endl;

    return 0;
}