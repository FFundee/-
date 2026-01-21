#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double V1, V2, S;
    double t = 0.5;   
    double distance;  
    cout << "Введите скорость первого автомобиля (V1, км/ч): ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля (V2, км/ч): ";
    cin >> V2;
    cout << "Введите начальное расстояние между автомобилями (S, км): ";
    cin >> S;
    if (V1 <= V2) {
        cout << "Ошибка: скорость первого автомобиля должна быть больше скорости второго (V1 > V2)." << endl;
        return 1;
    }
    double deltaV = V1 - V2;
    double additionalDistance = deltaV * t; 
    distance = S + additionalDistance;
    cout << "Через 30 минут расстояние между автомобилями составит: " << distance << " км." << endl;

    return 0;
}