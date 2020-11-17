#include "Foo.hpp"

Foo::Foo() {
    show_info("default constructor");
}

Foo::Foo(int param) {
    show_info("constructor");
    data = param;
}

Foo::Foo(const Foo& rhs){
    show_info("copy constructor");
    data = rhs.data;
};

Foo::~Foo() {
    show_info("destructor");
}

void Foo::show_info(const std::string &info) {
    std::cout << info << std::endl;
}

void Foo::add(const Foo &rhs) {
    data += rhs.data;
}

void Foo::sub(const Foo &rhs) {
    data -= rhs.data;
}

void Foo::setData(int param) {
    data = param;
}

int Foo::getData() {
    return data;
}