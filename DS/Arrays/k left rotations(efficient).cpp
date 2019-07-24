#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int k, a;
    cin>>k;
    int s = k%n;

    for(int i = 0; i < s; i++)
    {
        a = ar[0];
        for(int j = 1; j < n; j++)
        {
            ar[j-1] = ar[j];
        }
        ar[n-1] = a;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
}
