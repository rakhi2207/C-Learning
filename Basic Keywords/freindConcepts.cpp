#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:
        void setData(int b)
        {
            a=b;
        } 
        friend int add(A,B);
};
class B
{
    private:
        int b;
    public:
        void setData(int c)
        {
            b=c;
        } 
        friend int add(A,B);
};

int add(A a,B b)
{
    return a.a+b.b;
}

int main()
{
    A a;
    B b;
    a.setData(4);
    b.setData(5);
    cout<<add(a,b)<<"\n";
    return 0;
}