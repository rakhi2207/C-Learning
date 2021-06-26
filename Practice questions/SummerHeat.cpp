#include <iostream>
using namespace std;
int main()
{
    int D, d, p, q, T;
    cin >> T;
    while (T> 0)
    {
            cin >> D;
            cin >> d;
            cin >> p;
            cin >> q;
            int ans=(p/D)+(q/d);
            cout<<ans<<"\n";
        T--;
    }
    return 0;
}