#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double priceCandy, priceCookie, priceApple; 
    double kgCandy, kgCookie, kgApple;        
    double totalCost;                        
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> priceCandy;
    cout << "Введите стоимость 1 кг печенья: ";
    cin >> priceCookie;
    cout << "Введите стоимость 1 кг яблок: ";
    cin >> priceApple;

    cout << "Введите количество конфет (в кг): ";
    cin >> kgCandy;
    cout << "Введите количество печенья (в кг): ";
    cin >> kgCookie;
    cout << "Введите количество яблок (в кг): ";
    cin >> kgApple;

    double costCandy = priceCandy * kgCandy;
    double costCookie = priceCookie * kgCookie;
    double costApple = priceApple * kgApple;

    totalCost = costCandy + costCookie + costApple;

    cout << "Стоимость всей покупки: " << totalCost << " рублей" << endl;

    return 0;
}