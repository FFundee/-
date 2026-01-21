#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, b, ac, a, c, x;
    cout << "Введите число n (10 <= n <= 999): ";
    cin >> n;
    if (n < 10 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне [10, 999]." << endl;
        return 1;
    }
    b = n / 100;
    ac = n % 100;
    a = ac / 10;  
    c = ac % 10;  
    x = 100 * a + 10 * b + c;
    cout << "Исходное число x: " << x << endl;

    return 0;
}