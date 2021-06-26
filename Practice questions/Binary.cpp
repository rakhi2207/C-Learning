#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the length of array\n";
    cin>>N;
    cout<<"Enter the array in sorted manner\n";
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched\n";
    int S;
    cin>>S;
    int low=0,high=N-1;
    int mid=0;
    bool check=true;
    while(high>=low)
    {
       mid=(high+low)/2; 
       if(arr[mid]==S)
       {
           cout<<S<<" is present at index "<<mid<<"\n";
           check=false;
            break;
       }else if(arr[mid]>S)
       {
           high=mid-1;
       }else
       {
           low=mid+1;
       }
    }
    if(check)
    {
         cout<<S<<" is not present in array \n";
    }
    return 0;
}