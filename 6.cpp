#include <iostream>
#include <iomanip>  
int main() {
    const float  num= 3.1415926;
    std::cout << std::fixed << std::setprecision(3) << num << std::endl;
}