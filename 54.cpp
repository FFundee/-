#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, y; 
    cout << "Введите возраст Тани (X): ";
    cin >> x;
    cout << "Введите возраст Мити (Y): ";
    cin >> y;

    double averageAge = (x + y) / 2.0;

    double differenceTanya = x - averageAge;
    double differenceMitya = y - averageAge;

    cout << "Средний возраст: " << averageAge << " лет" << endl;
    cout << "Возраст Тани отличается от среднего на " << abs(differenceTanya) << " лет" << endl;
    cout << "Возраст Мити отличается от среднего на " << abs(differenceMitya) << " лет" << endl;

    return 0;
}