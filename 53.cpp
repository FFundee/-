#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int monitorCost, systemBlockCost, keyboardCost, mouseCost;
    int n; 
    cout << "Введите стоимость монитора: ";
    cin >> monitorCost;
    cout << "Введите стоимость системного блока: ";
    cin >> systemBlockCost;
    cout << "Введите стоимость клавиатуры: ";
    cin >> keyboardCost;
    cout << "Введите стоимость мыши: ";
    cin >> mouseCost;

    int onePCCost = monitorCost + systemBlockCost + keyboardCost + mouseCost;
    int threePCCost = onePCCost * 3;
    cout << "Стоимость 3 компьютеров: " << threePCCost << endl;
    cout << "Введите количество компьютеров (N): ";
    cin >> n;
    int nPCCost = onePCCost * n;
    cout << "Стоимость " << n << " компьютеров: " << nPCCost << endl;

    return 0;
}