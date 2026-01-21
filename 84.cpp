#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, a, b, c;
    for (x = 100; x <= 999; ++x) {
        a = x / 100;      
        b = (x / 10) % 10; 
        c = x % 10;  
        int step1 = x - c;     
        int step2 = step1 / 10;
        int result = c * 100 + step2; 
        if (result == 237) {
            cout << "Исходное число x: " << x << endl;
            break;
        }
    }

    return 0;
}