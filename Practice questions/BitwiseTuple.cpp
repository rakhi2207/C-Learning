#include<iostream>
using namespace std;
int main()
{
        long long int Mod=1000000007;
        long long int arr[1000002];
        arr[0]=1; 
        arr[1]=2;
        for(int i=2;i<=1000002;i++)
        {
            arr[i]=(2*arr[i-1])%Mod;
        }

    int T; 
    cin>>T;
    while(T-->0)
    {
        long long int N,M;
        cin>>N;
        cin>>M;
        long long int x=arr[N]-1;
        long long int temp=1;
        while(M>0)
        {
            if(M%2==1){
                temp*=x%Mod;
            }
            x*=x%Mod;
            M/=2;
        }
        cout<<temp<<"\n";
    }
    return 0;
}