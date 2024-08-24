#include <iostream>

struct X
{
    void f(int) {std::cout << "int";}
};

struct Y : X
{
    void f(double) {std::cout << "double";}
};

int main()
{
    int i {1};
    Y y;
    y.f(i);
}

