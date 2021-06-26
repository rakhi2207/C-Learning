#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a no";
    cin>>a;
    bool check=false;
    for(int j=2;j<=a;j++){
        for(int i=2;i<=(j/2);i++)
            {
                if(j%i==0)
                {
                    check=true;
                    cout<<j<<" is not prime\n";
                    break;
                }
            }
        if(check==false)
        {
            cout<<j<<" is prime\n";
        }
        check=false;
    }

    return 0;
}
