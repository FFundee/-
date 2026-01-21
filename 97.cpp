#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int k;
    cout << "Введите k (1 ≤ k ≤ 180): ";
    cin >> k;
    if (k < 1 || k > 180) {
        cout << "Ошибка: k должен быть в диапазоне [1, 180]." << endl;
        return 1;
    }
    int pair_number = (k + 1) / 2; 
    cout << "а) Номер пары цифр: " << pair_number << endl;
    int two_digit_number = 9 + pair_number; 
    cout << "б) Двузначное число: " << two_digit_number << endl;
    if (k % 2 == 0) {
        int digit = two_digit_number % 10;
        cout << "в) k-я цифра (k чётное): " << digit << endl;
    }
    else { 
        int digit = two_digit_number / 10;
        cout << "в) k-я цифра (k нечётное): " << digit << endl;
    }

    return 0;
}