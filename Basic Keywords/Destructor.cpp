#include<iostream>
using namespace std;

class Complex
{
    private:
        int b=3;
    public:
    ~Complex()
    {
        cout<<"Destructor class"<<"\n";
    }
    // friend void showb(Complex);
};
void fun()
{
    Complex c;
}
// void showb(Complex c)
// {
//    cout<<c.b<<"\n";
// }
int main()
{
    // showb(c);
    fun();
    return 0;
}