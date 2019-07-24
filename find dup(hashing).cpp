#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    //int ar[10] = {1, 1, 2, 2, 2, 2, 5, 5, 5, 7};
    int h[n];
    for(int i = 0; i < n; i++)
    {
        h[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        h[ar[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(h[i] > 0)
        {
            cout<<i<<" ";
        }
    }
}

