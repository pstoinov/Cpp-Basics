#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int a, c;
    double b, d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    double total = (a * b) + (c * d);

    std::cout << std::setw(5) << std::fixed << std::setprecision(2) << total << std::endl;

    
    
    return 0;
    }


    