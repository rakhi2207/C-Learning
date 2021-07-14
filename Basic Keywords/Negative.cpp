#include<iostream>
using namespace std;


 class Complex
 {
     private:
        int a=0;
        int b=0;
    public:
        void setData(int x,int z)
        {
            a=x;
            b=z;
        }
        Complex operator-()
        {
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
        void display()
        {
            cout<<a<<" "<<b<<"\n";
        }
 };

 int main()
 {
     Complex c,c1,c3;
     c.setData(6,8);
     c1.setData(9,10);
     c3=-c;
     c.display();
     c1.display();
     c3.display();
     return 0;
 }