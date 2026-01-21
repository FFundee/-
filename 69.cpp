#include <Windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int width = 543;     
    int height = 130;   
    int squareSide = 130; 
    int squaresByWidth = width / squareSide;
    int squaresByHeight = height / squareSide;
    int totalSquares = squaresByWidth * squaresByHeight;
    cout << "Количество квадратов со стороной " << squareSide << " мм, " << "которые можно отрезать: " << totalSquares << endl;

    return 0;
}