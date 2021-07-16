#include<iostream>
using namespace std;

class Box
{
    private:
        int l,b,h;
    public:
        void setDimension(int l,int b,int h)
        {
            this->l=l;
            this->b=b;
            this->h=h;
        }
        void display()
        {
            cout<<"l is "<<this->l<<" b is "<<this->b<<" c is "<<this->h<<"\n";
        }
};
int main()
{
    Box *p,smallbox;
    p=&smallbox;
    p->setDimension(3,4,5);
    p->display();
    return 0;
}