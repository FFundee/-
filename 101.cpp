#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double y;
    double M_PI;
    const double pi = M_PI; 
    cout << "Введите угол y (в радианах, 0 < y ≤ 2π): ";
    cin >> y;
    if (y <= 0 || y > 2 * pi) {
        cout << "Ошибка: угол должен быть в диапазоне (0, 2π]." << endl;
        return 1;
    }
    double angle_deg = y * (180.0 / pi);
    int hours = static_cast<int>(angle_deg / 30.0);
    double remaining_angle = angle_deg - (hours * 30.0);
    double minute_angle_rad = remaining_angle * (pi / 180.0);
    int minutes = static_cast<int>(remaining_angle / 6.0);
    cout << "Угол для минутной стрелки (в радианах): " << minute_angle_rad << endl;
    cout << "Количество полных часов: " << hours << endl;
    cout << "Количество полных минут: " << minutes << endl;

    return 0;
}
