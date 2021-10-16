#include<iostream>
using namespace std;
class base
    {
    public:
        int a,b;
    };
    class sub:public base
    {
    public:
        void fun()
        {
            a=10;
            b=5;
            cout<<"a+b="<<a+b;
        }
    };
    int main()
    {
        cout<<sizeof(sub)<<"\n";
        sub ob;
        ob.fun();
    }
