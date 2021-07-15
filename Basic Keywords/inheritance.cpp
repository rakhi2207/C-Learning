#include<iostream>
using namespace std;

class A
{
    private:
        int x;
    protected:
        void set(int y)
        {
            x=y;
        }
    public: 
        void display()
        {
            cout<<x<<"\n";
        }
};
class B:public A{
    public:
        void setB(int z)
        {
            set(z);
        }
};

int main()
{
    B b1;
    // // b1.set(4); // wrong way because while 
    // Inheritance public keyword is used due to which 
    // private and protect members of a remains prvate and protected only in B class also.
    b1.setB(3);
    b1.display();//This will be accessible because it is public in class a as well as public in class b
    return 0;
}