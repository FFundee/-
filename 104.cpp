#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int days = 234;
    int weeks = days / 7; 
    int remaining_days = days % 7; 
    cout << "Полных недель: " << weeks << endl;
    cout << "Оставшихся дней: " << remaining_days << endl;

    return 0;
}
