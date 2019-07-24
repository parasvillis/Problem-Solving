#include<iostream>
using namespace std;
void (*p) (int, int);
void sum(int val1, int val2)
{
    int sum;
    sum = val1 + val2;
    cout<<sum<<endl;
}
void sub(int val1, int val2)
{
    int sub;
    sub = val1 - val2;
    cout<<sub<<endl;
}
int main()
{
    int a,b;
    p = sum;
    (*p)(10, 20);
    p=sub;
    cin>>a>>b;
    (*p)(a,b);
}
