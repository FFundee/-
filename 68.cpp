#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N;
    cout << "Введите количество секунд, прошедших с начала суток: ";
    cin >> N;
    int hours = N / 3600; 
    int minutes = (N % 3600) / 60; 
    int seconds = N % 60; 
    cout << "а) Полных часов прошло с начала суток: " << hours << endl;
    cout << "б) Полных минут прошло с начала очередного часа: " << minutes << endl;
    cout << "в) Полных секунд прошло с начала очередной минуты: " << seconds << endl;

    return 0;
}