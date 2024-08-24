#include <iostream>

struct A
{
    virtual void func(int i = 1)
    {
        std::cout << "A" << i << std::endl;
    }
};

struct B : A
{
    virtual void func(int i = 2)
    {
        std::cout << "B" << i << std::endl;
    }
};

int main()
{
    A *b = new B;
    b->func();
}
