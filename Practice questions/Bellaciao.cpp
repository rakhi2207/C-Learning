#include <iostream>
using namespace std;
int main()
{
    long long int D, d, p, q, T;
    cin >> T;
    while (T> 0)
    {
            cin >> D;
            cin >> d;
            cin >> p;
            cin >> q;
        long long int sum = 0;

            long long int n=D/d;
            sum=d*((n*p)+(q*((n*(n-1))/2)));
            long long int a=D%d;
            sum+=a*(p+n*q);
        
        cout << sum << "\n";
        T--;
    }
    return 0;
}