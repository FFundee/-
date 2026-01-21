#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты вершины A (x, y): ";
    cin >> x1 >> y1;
    cout << "Введите координаты вершины B (x, y): ";
    cin >> x2 >> y2;
    cout << "Введите координаты вершины C (x, y): ";
    cin >> x3 >> y3;
    double a = distance(x2, y2, x3, y3); 
    double b = distance(x1, y1, x3, y3); 
    double c = distance(x1, y1, x2, y2); 
    double perimeter = a + b + c;
    double p = perimeter / 2; 
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь треугольника: " << area << endl;

    return 0;
}