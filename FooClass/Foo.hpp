#pragma once
#include <string>
#include <iostream>

class Foo {

private:
    int data = 0;
    //can be changed to other types;

    void show_info(const std::string&);
public:
    Foo();

    Foo(int);

    Foo(const Foo&);

    ~Foo();

    //constructor and destructor

    void add(const Foo&);

    void sub(const Foo&);

    int getData();

    void setData(int);
};

