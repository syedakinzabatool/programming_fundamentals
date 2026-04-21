#include <iostream>

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; ++i) {
        std::cout << " ";
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; ++i) {
        std::cout << "* ";
    }
}

void printHexagonal(int n) {
    int spaces = n - 1;
    int stars = 1;

    for (int i = 1; i <= n; ++i) {
        printSpaces(spaces);

        printStars(stars);

        if (i < n / 2 + 1) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }

        std::cout << std::endl;
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the hexagon: ";
    std::cin >> size;

    if (size % 2 == 0) {
        std::cout << "Please enter an odd number for a better hexagonal shape!" << std::endl;
        return 1;
    }

    printHexagonal(size);

    return 0;
}
