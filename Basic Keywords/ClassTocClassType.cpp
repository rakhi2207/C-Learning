#include<iostream>
using namespace std;

class Item
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<a<<" "<<b<<"\n";
        }

};
class Product
{
    private:
        int x,y;
    public:
        void setData(int a,int b)
        {
            x=a;
            y=b;
        } 
        operator Item()
        {
            Item i;
            i.setData(x,y);
            return i;
        }
};

int main()
{
    Product p;
    p.setData(2,3);
    Item i;
    i=p;
    i.display();

    return 0;
}