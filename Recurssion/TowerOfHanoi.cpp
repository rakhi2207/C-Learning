#include<iostream>
using namespace std;
void toh(int n,char src,char help,char dest)
{
    if(n==0)
    {
        return ;
    }
    toh(n-1,src,dest,help);
    cout<<"Move from "<<src<<" to "<<dest<<"\n";
    toh(n-1,help,dest,src);

}
int main()
{
    int n;
    cout<<"Enter no of disks ";
    cin>>n;
    toh(n,'A','B','C');
    cout<<"\n";
    return 0;
}