#include<iostream>
using namespace std;
class Dummy
{
    private:
        int a,b;
        int *p;
    public:
        Dummy(int d,int e,int c)
        {
            a=d;
            b=e;
            p=new int;
            *p=c;
        }
        Dummy(Dummy &d)
        {
            a=d.a;
            b=d.b;
            p=new int;
            *p=*(d.p);
        }
        void display()
        {
            cout<<a<<" "<<b<<" "<<*p<<"\n";
        }
        ~Dummy()
        {
            delete p;
        }
};

int main()
{
    Dummy d1(2,3,4);
    d1.display();
    Dummy d2=d1;
    d2.display();
    return 0;
}