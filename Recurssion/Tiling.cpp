#include<iostream>
using namespace std;

int tiling(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    return tiling(n-1)+tiling(n-2);

}
int main()
{
    int n;
    cout<<"Enter the column of tilling";
    cin>>n;
    cout<<tiling(n)<<"\n";
}