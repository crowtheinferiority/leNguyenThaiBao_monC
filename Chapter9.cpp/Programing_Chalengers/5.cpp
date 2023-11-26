#include <iostream>
int doSomething(int *x, int *y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main() {
    int a = 5, b = 10;
    std::cout << "Kết quả: " << doSomething(&a, &b) << "\n";
    std::cout << "a: " << a << ", b: " << b << "\n";
    return 0;
}
