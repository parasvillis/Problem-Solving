#include<iostream>
#include<math.h>
using namespace std;
class A
{
public:
    void sum(int x, int y)
    {
        int sum;
        sum = x + y;
        cout<<sum<<endl;
    }
    void sub(int x, int y)
    {
        int sub;
        sub = x - y;
        cout<<sub<<endl;
    }
    void mul(int x, int y)
    {
        int z;
        z =  x*y;
        cout<<z<<endl;
    }
    void div(int x, int y)
    {
        int d;
        d = x/y;
        cout<<d<<endl;
    }
};
int main()
{
    A *p = new A;
    int a, b;
    cin>>a>>b;
    p -> sum(a, b);
    p -> sub(a, b);
    p -> mul(a, b);
    p -> div(a, b);
}
