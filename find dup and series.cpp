#include<iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2, 0};
    int mis;
    for(int i = 0; i < 3; i++)
    {
        if(a[i] != i)
        {
            mis = i;
        }
    }
    cout<<"Missing: "<<mis;
}
