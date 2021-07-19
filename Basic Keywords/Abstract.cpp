#include<iostream>
using namespace std;
class A
{
    virtual void fun()=0;
    protected:
        void f1()
        {
            cout<<"F1 function "<<"\n";
        }
};

class B:public A
{
    public:
        void fun()
        {
            cout<<"Fun Function"<<"\n";
        }
        void f2()
        {
            f1();
        }
};

int main()
{
    B b;
    b.fun();
    b.f2();
    return 0;
}