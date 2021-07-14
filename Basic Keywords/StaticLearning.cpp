#include<iostream>
using namespace std;

class Apparatus{
    private:
        int a;
        static float b;
    public:
        void seta(int z)
        {
            a=z;
        }
        static void setb(float r)
        {
            b=r;
        }
};
float Apparatus:: b;

int main()
{
    Apparatus a1;
    a1.seta(3);
    Apparatus::setb(3.4f);
    return 0;
}