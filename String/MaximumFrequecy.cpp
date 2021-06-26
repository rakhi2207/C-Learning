#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[26]={0};


    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-97]++;
    }

    int maximumFrequency=INT_MIN;
    for(int i=0;i<26;i++)
    {
        maximumFrequency=max(maximumFrequency,arr[i]);
    }
    cout<<"Maximum ocurring Frequency is "<<maximumFrequency<<"\n";
    return 0;
}