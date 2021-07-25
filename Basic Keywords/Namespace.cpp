#include<iostream>
using namespace std;
namespace Myspace
{
    int a;
    void display();
    class Hello{
        public:
            void fun();
    };
}
void Myspace::display()
{
    cout<<Myspace::a<<"\n";
}

void Myspace::Hello::fun()
{
    cout<<"Fun Function"<<"\n";
}
using namespace Myspace;
int main()
{
    a=10; //If we donot write using Keyword along with namespace 
    //Myspace then while using a variable we have to use it like Myspace::a
    display();
    Hello h1;
    h1.fun();
}