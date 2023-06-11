#include <iostream>

int main()
{
    
    double x, y;
    double pi = atan(1) * 4;
    std::cin >> x;
    if (x >= 2)
    {
        y = sin(30 * (pi/180)) + sqrt(x);
    }
    else
    {
        y = (18 * pow(x, 2)) + (17 * x) + 8.82;
    }
    std::cout << y;
    return 0;

    
}
