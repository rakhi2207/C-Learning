#include<iostream>
using namespace std;

class Dummy
{
    private:
        int a;
    public:
        Dummy(int x)
        {
            a=x;
        }

        operator int()
        {
            return a;
        }
};

int main()
{
    int x;
    Dummy c1(4);
    x=c1;
    cout<<x<<"\n";
    return 0;
}
