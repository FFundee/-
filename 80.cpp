#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int number;
    cout << "Введите четырёхзначное число: ";
    cin >> number;
    if (number < 1000 || number > 9999) {
        cout << "Ошибка! Введите число от 1000 до 9999." << endl;
        return 1;
    }
    int d1 = number / 1000;   
    int d2 = (number % 1000) / 100; 
    int d3 = (number % 100) / 10;  
    int d4 = number % 10;          
    int reversed = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    cout << "а) Обратное число: " << reversed << endl;
    int swapped_ab_cd = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
    cout << "б) Перестановка 1-2 и 3-4 цифр: " << swapped_ab_cd << endl;
    int swapped_bc = d1 * 1000 + d3 * 100 + d2 * 10 + d4;
    cout << "в) Перестановка 2-3 цифр: " << swapped_bc << endl;
    int swapped_first_last_digits = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
    cout << "г) Перестановка первых двух и последних двух цифр (способ 1): " << swapped_first_last_digits << endl;
    int temp = number % 100;
    number /= 100;        
    int swapped_first_last_no_digits = temp * 100 + number;
    cout << "г) Перестановка первых двух и последних двух цифр (способ 2): " << swapped_first_last_no_digits << endl;

    return 0;
}