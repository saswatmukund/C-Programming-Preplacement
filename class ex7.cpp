#include<iostream>
using namespace std;
class base
    {
    protected:
        int a,b;
    };
    class sub:protected base
    {
    public:
        void fun()
        {
            a=10;
            b=5;
            cout<<"a+b="<<a+b;
        }

    };
    class sub1:protected sub
        {public:

            void fun1()
            {
                sub ob;
                ob.fun();
            }
        };
    int main()
    {
        sub1 ob;
        ob.fun1();
    }

