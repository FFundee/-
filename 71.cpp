#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;     cout << "Введите количество месяцев (n), прошедших с начала 1990 года: ";
    cin >> n;    int x = (n % 12) + 1;
    if (x > 12) {
        x = 12;
    }
    cout << "Номер месяца (x) для даты через " << n << " месяцев и 2 дня: " << x << endl;

    return 0;
}