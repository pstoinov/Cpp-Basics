#include <iomanip>
#include <iostream>

int main()
{
    int n, p;
        std::cin >> n;
        std::cin >> p;

        if (n <= p) {
            std::cout << "error" << std::endl;
            return 0;
        }

        int sum = 0;
        for (int i = p; i <= n; i++) {
            sum += i * i;
        }

        std::cout << std::setw(5) << sum << std::endl;

       return 0;
}

