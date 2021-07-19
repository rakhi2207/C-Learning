#include<iostream>
using namespace std;
class Book
{
    private:
        int a,b;
        int &n;
        const int x;//This can only be intialiazed by intializer only as this is const
    public:
        Book(int &n):x(3),a(4),b(5),n(n)
        {

        }
        void display(){
            cout<<a<<" "<<b<<" "<<x<<" "<<n<<"\n";
        }

};
int main()
{
    int m=6;
    Book b=m; //Book b(m) both denotion ar same
    b.display();
    return 0;
}