#include<iostream>
using namespace std;

class A
{
    private:
        int a;

    public:
        A(int k)
        {
            a=k;
        }
        void dislay1()
        {
            cout<<" a is "<<a<<"\n";
        }
};

class B:public A
{
    private:
        int b;
    public:
        B(int c,int d):A(d)
        {
            b=c;
        }
        void display()
        {
            dislay1();
            cout<<" b is "<<b<<"\n";
        }
};
int main()
{
    B b(3,4);
    b.display();
    return 0;
}
