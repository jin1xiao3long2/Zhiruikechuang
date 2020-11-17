#include "Foo.hpp"
#include <iostream>

int main(){
    Foo *foo = new Foo();
    std::cout << foo->getData() << std::endl;
    Foo *foodata = new Foo(2);
    Foo foo_copy(*foodata);
    std::cout << foo_copy.getData() << std::endl;
    return 0;
}