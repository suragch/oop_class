#include <iostream>

void swap(int &a, int &b);

int main() {

    int a = 2;
    int b = 5;

    std::cout << "a=" << a << '\n';
    std::cout << "b=" << b << '\n';

    swap(a, b);

    std::cout << "a=" << a << '\n';  // 5
    std::cout << "b=" << b << '\n';  // 2

    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
