#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int ab;    
    int ba;         cout << "Введите двузначное число: ";
    cin >> ab;
    ba = ab % 10 * 10 + ab / 10;
    cout << "Число при перестановке цифр: " << ba << endl;

    return 0;
}