#include <iostream>

struct MyStruct {
    int x;
    int y;
    double d;
    char a[8];
} st;

int main() {
    std::cout << sizeof(MyStruct) << std::endl;
}