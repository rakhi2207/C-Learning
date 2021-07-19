#include<iostream>
using namespace std;

template<class X,class Y>
X comp(X a,Y b)
{
    if(a>b)
    {
        return a;
    }
    return b;
};


int main()
{
    cout<<comp(4,5.2)<<"\n";
    return 0;
}