#include <iostream>

class A
{
public:
    A() {std::cout << "a";}
    ~A() {std::cout << "A";}
};

class B
{
public:
    B() {std::cout << "b";}
    ~B() {std::cout << "B";}
};

class C
{
public:
    C() {std::cout << "c";}
    ~C() {std::cout << "C";}
};

A a;

void func() 
{
    static C c;
}

int main()
{
    B b;
    func();
}
