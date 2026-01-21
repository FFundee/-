#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <cmath>
int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int A;
    printf("Введите трёхзначное число: ");
    scanf("%i", &A);
    int newNumber = (A % 100) / 10 * 100 + A % 10 * 10 + A / 100;
    printf("Полученное число: %i\n", newNumber);

    return 0;
}