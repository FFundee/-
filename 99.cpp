#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int h, m, s;
    cout << "Введите часы (h, 1-23): ";
    cin >> h;
    cout << "Введите минуты (m, 0-59): ";
    cin >> m;
    cout << "Введите секунды (s, 0-59): ";
    cin >> s;
    if (h < 1 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        cout << "Ошибка: значения выходят за допустимые пределы!" << endl;
        return 1;
    }
    double angle = h * 30.0 + m * 0.5 + s * (0.5 / 60.0);
    cout << "Угол между положением часовой стрелки в начале суток и в момент "
        << h << ":" << m << ":" << s << " составляет " << angle << " градусов." << endl;

    return 0;
}