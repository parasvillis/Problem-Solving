#include<iostream>
using namespace std;
int main()
{
    int a = 100;
    int *p = &a;
    int **p2;
    p2=&p;
    cout<<&a<<endl<<*p<<endl<<p<<endl<<a<<"address of p  "<<&p<<endl<<p2;
    int b = 200;
    p = &b;
    cout<<"\n\n\n";
    cout<<&b<<endl<<*p<<endl<<p<<endl<<b;
    cout<<"\n\n\n";
    cout<<p++;
}
