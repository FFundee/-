#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int k, d, n;    cout << "Введите номер дня года (k, 1 ≤ k ≤ 365): ";
    cin >> k;
    cout << "Введите день недели для 1 января (d, 1 — понедельник, 7 — воскресенье): ";
    cin >> d;
    n = (d + k - 1) % 7;
    if (n == 0) {
        n = 0; 
    }
    else {
        n = n - 1;
    }
    cout << "День недели для " << k << "-го дня года: " << n << endl;
    return 0;
}