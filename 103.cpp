#include <Windows.h>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;
    cin >> a >> b; 
    int result = (a % b == 0) || (b % a == 0);
    cout << result << endl; 

    return 0;
}
