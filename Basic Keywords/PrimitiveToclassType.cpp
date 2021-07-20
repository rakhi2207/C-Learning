#include<iostream>
using namespace std;
class Dummy
{
    private:
        int a;
    
    public:
    Dummy()
    {

    }
    Dummy(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a<<"\n";
    }
};
int main()
{
    int a=4;
    Dummy d1;
    d1=a;
    d1.show();
    return 0;
}