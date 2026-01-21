#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, a, b, c, x;
    cout << "Введите число n (100 <= n <= 999): ";
    cin >> n;
    if (n < 100 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне [100, 999]." << endl;
        return 1;
    }
    a = n / 100;          
    c = (n / 10) % 10;    
    b = n % 10;            
    x = 100 * a + 10 * b + c;
    cout << "Исходное число x: " << x << endl;

    return 0;
}