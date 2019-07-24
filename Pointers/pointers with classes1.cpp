#include<iostream>
using namespace std;
class pointer
{
    int l, b, h;
public:
    void get_data()
    {
        cin>>l>>b>>h;
    }
    void volume()
    {
        cout<<"Volume is: "<<l*b*h<<endl;
    }
};
int main()
{
    pointer p1;
    p1.get_data();
    pointer *ptr;
    ptr = &p1;
    ptr -> volume();
    pointer p2;
    p2.get_data();
    ptr = &p2;
    ptr -> volume();
}
