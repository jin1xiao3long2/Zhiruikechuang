#include <iostream>

using std::endl;
using std::cout;

//strcut in C
typedef struct node{
    int a;
    typedef struct node *ptr;
}node;

//struct in C++

struct Node{
    int a;
    Node *ptr = nullptr;
};

class account{
    //private protected public

    double money = 1000;

    void cun(double Money){
        money += Money;
    }

    void qu(double Money){
        if(money >= Money)
            money -= Money;
        else
        {
            cout << "no enough money"<<endl;
            //todo
        }
    }
};
int main()
{

    return 0;
}