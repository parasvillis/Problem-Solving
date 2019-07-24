#include<iostream>
using namespace std;
class pointer
{
    int l, b, h;
public:
    pointer()
    {
        cin>>l>>b>>h;
    }
    int volume()
    {
        cout<<"Volume is: "<<l*b*h;
    }
};
int main()
{
    pointer p1;
    pointer *ptr;
    ptr = &p1;
    ptr -> volume();
    pointer p2;
    ptr = &p2;
    ptr -> volume();
}
