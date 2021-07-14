#include<iostream>
using namespace std;
struct book
{
    private:
        int book_id;
        string title;
        float price;
    public:
    void input()
    {
        cout<<"Enter the book_id title price";
        cin>>book_id>>title>>price;
    }
    void display()
    {
        cout<<"Book id is "<<book_id<<" Title is "<<title<<" price is "<<price;
    }
};

int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}