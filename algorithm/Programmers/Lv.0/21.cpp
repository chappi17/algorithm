#include <iostream>
#include <sstream>

int customOperation(int a, int b) {
    std::stringstream ss1, ss2;
    ss1 << a << b;
    ss2 << b << a;

    int ab, ba;
    ss1 >> ab;
    ss2 >> ba;

    return ab >= ba ? ab : ba;
}

int main() {
    int a = 9, b = 91;
    int result = customOperation(a, b);
    std::cout << "The result of " << a << " ⊕ " << b << " is " << result << std::endl;

    return 0;
}