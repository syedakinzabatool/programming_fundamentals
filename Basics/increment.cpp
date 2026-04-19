#include <iostream>

int main() {
    std::cout << "Display the operation of pre and post increment and decrement" << std::endl;

    int num = 5;

    std::cout << "Initial value: " << num << std::endl;

    // Pre-increment and pre-decrement
    std::cout << "Pre-increment: " << ++num << std::endl;
    std::cout << "Pre-decrement: " << --num << std::endl;

    // Post-increment and post-decrement
    std::cout << "Post-increment: " << num++ << std::endl;
    std::cout << "After post-increment: " << num << std::endl;

    std::cout << "Post-decrement: " << num-- << std::endl;
    std::cout << "After post-decrement: " << num << std::endl;

    return 0;
}
