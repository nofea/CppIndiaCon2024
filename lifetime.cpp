#include <iostream>

class C {

    int val {};

public:
    int &getVal() { return val; }
    void printval() { std::cout << val; }
};

int main() {
    C c;
    c.printval();
    auto x = c.getVal();
    ++x;
    c.printval();
}

