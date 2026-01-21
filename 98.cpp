#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int k;
    cout << "Введите k (1 ≤ k ≤ 150): ";
    cin >> k;
    if (k < 1 || k > 150) {
        cout << "Ошибка: k должен быть в диапазоне [1, 150]." << endl;
        return 1;
    }
    int number_index = (k - 1) / 3; 
    int target_number = 101 + number_index;     
    int digit_position = (k - 1) % 3;
    int kth_digit;
    switch (digit_position) {
    case 0: 
        kth_digit = target_number / 100;
        break;
    case 1: 
        kth_digit = (target_number / 10) % 10;
        break;
    case 2: 
        kth_digit = target_number % 10;
        break;
    }
    cout << "k-я цифра: " << kth_digit << endl;
    switch (k % 3) {
    case 0:
        cout << "k кратно 3." << endl;
        break;
    case 1:
        cout << "k принадлежит последовательности 1, 4, 7, ..." << endl;
        break;
    case 2:
        cout << "k принадлежит последовательности 2, 5, 8, ..." << endl;
        break;
    }

    return 0;
}