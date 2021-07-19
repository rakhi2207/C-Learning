#include<iostream>
using namespace std;

template<class X>
class ArrayList
{
    private:
        struct Array
        {
            int capacity;
            X* ptr;
        };
        
        Array *s;
    public:
        ArrayList(int capacity)
        {
            s=new Array();
            s->capacity=capacity;
            s->ptr=new X[capacity];
        }

        void addElement(int index,X data)
        {
            if(index>=0&&index<s->capacity)
                s->ptr[index]=data;
            else
                cout<<"Index out of bound Exception \n";
        }

        X getElement(int index)
        {
            if(index>=0&&index<s->capacity)
                return s->ptr[index];
            else
                return -1;
        }

        void viewElement()
        {
            for(int i=0;i<s->capacity;i++)
            {
                cout<<s->ptr[i]<<" ";
            }
            cout<<"\n";
        }
};

int main()
{
    ArrayList<float> a(5);
    a.addElement(0,18.2);
    a.addElement(1,22.2);
    a.addElement(2,14.2);
    a.addElement(3,17.2);
    a.addElement(4,25.2);
    cout<<a.getElement(3)<<"\n";
    cout<<a.getElement(5)<<"\n";
    a.viewElement();
    return 0;
}