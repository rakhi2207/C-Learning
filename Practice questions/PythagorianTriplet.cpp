#include<iostream>
using namespace std;
bool pythagoraus(int x,int y,int z)
{
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x)
    {
       b=y;
       c=z;
    }else if(a==y)
    {
        b=x;
        c=z;
    }else
    {
        b=y;
       c=x; 
    }
    if(a*a==((b*b)+(c*c)))
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int x,y,z;
    cout<<"Enter first no";
    cin>>x;
    cout<<"Enter second no";
    cin>>y;
    cout<<"Enter third no";
    cin>>z;
    if(pythagoraus(x,y,z))
    {
        cout<<x<<" "<<y<<" "<<"and "<<z<<" is pythagoraus triplet \n";
    }else
    {
                cout<<x<<" "<<y<<" "<<"and "<<z<<" is not a pythagoraus triplet \n";
    }
    return 0;
}