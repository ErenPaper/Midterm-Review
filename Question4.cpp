#include <iostream>

char check(char a, char b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
    std::cout << check('A', 'Y') << std::endl;
}

int main() {
    std::cout << check('A', 'Y') + 1<< std::endl;
} 