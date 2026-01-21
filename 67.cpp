#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int days = 234; 
    const int days_in_week = 7; 
    int full_weeks; 
    full_weeks = days / days_in_week;
    cout << "Количество полных недель: " << full_weeks << endl;

    return 0;
}