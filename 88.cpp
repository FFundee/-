#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b, c, x;
    bool found = false;
    for (a = 1; a <= 9; ++a) {     
        for (b = 0; b <= 9; ++b) {  
            for (c = 0; c <= 9; ++c) { 
                if (100 * b + 10 * a + c == 546) {
                    x = 100 * a + 10 * b + c; 
                    cout << "Исходное число x: " << x << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }
    if (!found) {
        cout << "Решение не найдено." << endl;
    }

    return 0;
}