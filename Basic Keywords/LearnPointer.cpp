#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Numbers before swapping "<<a<<" "<<b<<"\n";
    swap(&a,&b);
    cout<<"Numbers after swapping "<<a<<" "<<b<<"\n";
    return 0;
}