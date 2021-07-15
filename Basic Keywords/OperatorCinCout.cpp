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
        void display()
        {
            cout<<a<<" "<<b<<"\n";
        }
    friend ostream& operator<<(ostream& ,Complex);
    friend istream& operator>>(istream& ,Complex&);
 };

 ostream& operator<<(ostream& dout ,Complex c)
 {
     dout<<"a is "<<c.a<<" b is "<<c.b;
     return dout;
 }
 istream& operator>>(istream& iout ,Complex& c)
 {
     iout>>c.a>>c.b;
     return iout;
 }

 int main()
 {
     Complex c;
    cout<<"Enter the numbers ";
    cin>>c;
    cout<<"Numbers is ";
    cout<<c<<"\n";
     return 0;
 }