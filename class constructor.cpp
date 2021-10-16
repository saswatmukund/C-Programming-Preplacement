#include<iostream>
using namespace std;
class base
{
public:
    int x;
    base()
    {
        x=10;
    }
    base(int a)
    {
        x=a;
    }
    base(base &o)
    {
       cout<<"x="<<o.x;
    }
};
int main()
{
    base ob,obj(90),ob2(obj);
}
