#include<iostream>
using namespace std;
class base
{
    int age=18;
    void fun()
    {
        cout<<"Examples of data hiding";
    }
public:
    int a;
    void fun1()
    {
        a=age;
    }
};
int main()
{
    base ob;
    ob.fun1();
    cout<<"age= "<<ob.a;
}
