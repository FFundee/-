#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2; 
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Введите координаты вершины A (x, y): ";
    cin >> x1 >> y1;
    cout << "Введите координаты вершины B (x, y): ";
    cin >> x2 >> y2;
    cout << "Введите координаты вершины C (x, y): ";
    cin >> x3 >> y3;
    cout << "Введите координаты вершины D (x, y): ";
    cin >> x4 >> y4;
    double a1 = distance(x1, y1, x2, y2); 
    double b1 = distance(x2, y2, x3, y3); 
    double c1 = distance(x1, y1, x3, y3); 
    double a2 = distance(x1, y1, x3, y3); 
    double b2 = distance(x3, y3, x4, y4); 
    double c2 = distance(x1, y1, x4, y4); 
    double area1 = triangleArea(a1, b1, c1);
    double area2 = triangleArea(a2, b2, c2); 
    double quadArea = area1 + area2;
    cout << "Площадь четырёхугольника: " << quadArea << endl;

    return 0;
}