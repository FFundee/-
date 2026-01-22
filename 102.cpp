#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int h, m;
    cout << "Введите h (1-12): ";
    cin >> h;
    cout << "Введите m (0-59): ";
    cin >> m;
    if (h < 1 || h > 12 || m < 0 || m > 59) {
        cout << "Ошибка: неверные значения h или m!" << endl;
        return 1;
    }
    double hour_angle = (h % 12) * 30.0 + m * 0.5;
    double minute_angle = m * 6.0;
    double delta = abs(hour_angle - minute_angle);
    if (delta > 180) delta = 360 - delta;
    double t_a = delta / 5.5;
    int minutes_a = static_cast<int>(ceil(t_a));     
    double target_angle = 90.0;
    double diff = abs(target_angle - delta);
    double t_b = diff / 5.5;
    int minutes_b = static_cast<int>(ceil(t_b)); 
    cout << "Наименьшее время до совпадения стрелок (в минутах): " << minutes_a << endl;
    cout << "Наименьшее время до перпендикулярности стрелок (в минутах): " << minutes_b << endl;

    return 0;
}
