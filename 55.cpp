#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double V1, V2, S, t; 
    cout << "Введите скорость первого автомобиля (V1, км/ч): ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля (V2, км/ч): ";
    cin >> V2;
    cout << "Введите начальное расстояние между автомобилями (S, км): ";
    cin >> S;
    t = S / (V1 + V2);
    cout << "Автомобили встретятся через " << t << " часов." << endl;

    return 0;
}