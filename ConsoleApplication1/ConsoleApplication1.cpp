#include <iostream>

int main() {
    int lastDigit;

    std::cout << "Enter the last digit of the pyramid: ";
    std::cin >> lastDigit;

    int numRows = (lastDigit + 1) / 2;
    int numSpaces = numRows - 1;
    int currentNumber = 1;

    for (int row = 1; row <= numRows; row++) {
        for (int space = 1; space <= numSpaces; space++) {
            std::cout << " ";
        }
        
        for (int col = 1; col <= row * 2 - 1; col++) {
            std::cout << currentNumber;
            currentNumber++;
        }
        
        std::cout << std::endl;
        numSpaces--;
    }

    return 0;
}