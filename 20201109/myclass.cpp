#include <iostream>

using std::cout;
using std::endl;

int i = 0;

class Foo{

private:
    int data;


public:
    Foo()
    {
        cout << "Cons" << endl;
    }

    Foo(int Data)
    {
        data = Data;
        cout << "cons" << endl;
    }

    Foo(const Foo& foo){
        this->data = foo.data;
        cout << "copy" << endl;
    }

    ~Foo()
    {
        cout << "des" << endl;
    }

};

Foo getFoo(Foo foo)
{
    return foo;
}

int main(){
//    cout << ::i << endl;
    Foo *foo = new Foo;
//    Foo foo1 =Foo();
//    Foo foo2 =Foo(2);
    Foo fooo = getFoo(*foo);
//    Foo *foo = new Foo;
    return 0;
}