#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, c, ab, x;
    cout << "Введите число n (10 <= n <= 999): ";
    cin >> n;
    if (n < 10 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне [10, 999]." << endl;
        return 1;
    }
    c = n / 100;
    ab = n % 100;
    x = 100 * (ab / 10) + 10 * (ab % 10) + c;
    cout << "Исходное число x: " << x << endl;

    return 0;
}