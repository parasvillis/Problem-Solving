#include<iostream>
using namespace std;

void func1(int r, int c, int(*x)[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<*(*(*x+i)+j)<<" ";
        }
    }
    cout<<endl;
}

void func2(int r, int c, int(*x)[3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<*(*(x+i)+j)<<" ";
        }
    }
    cout<<endl;
}

void func3(int r, int c, int*x)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<*(x+j)<<" ";
        }
        x += 3;
    }
}

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    func1(3, 3, &a);
    func2(3, 3, a);
    func3(3, 3, *a);
}
