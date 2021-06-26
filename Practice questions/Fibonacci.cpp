#include<iostream>
using namespace std;
void Fibonacci(int a)
{
    int t1=0;
    int t2=1;
    int b=0;
    for(int i=0;i<a;i++)
    {
        cout<<t1<<"\n";
        b=t1+t2;
        t1=t2;
        t2=b;
    }
    return;
}

int main(){
    int a;
    cout<<"Enter a no";
    cin>>a;
    Fibonacci(a);
    return 0;
}
