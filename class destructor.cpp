#include<iostream>
using namespace std;
class base
{
public:
    int x[10];
    base()
    {
        cout<<"constructor\n";
    }
    ~base()
    {
        cout<<"Destructor\n";
        delete x;
    }
};
int main()
{
    base ob;
    cout<<"End\n";
}

