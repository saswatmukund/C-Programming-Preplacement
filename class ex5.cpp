#include<iostream>
using namespace std;
class base
    {
    private:
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
        sub ob;
        ob.fun();
        cin<<ob.a;
    }

