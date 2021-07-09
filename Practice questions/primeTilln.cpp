#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a no";
    cin>>a;

        for(int i=2;i<=a;i++)
        {
         int count=0;   
         for(int j=2;j*j<=i;j++)
            {
                
                if(i%j==0)
                {
                    count++;        
                    break;
                }
        
            }
            if(count==0)
            {
                cout<<i<<"\n";
            }
        }
    return 0;
}
