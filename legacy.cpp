#include <iostream>

void f(int &a, const int &b){
    std::cout << b;
    a++;
    std::cout << b;
}

int main(){
    int x{};
    f(x, x);
}
