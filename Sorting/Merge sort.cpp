#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int l[n/2], r[n-(n/2)];
    for(int i = 0; i < n/2; i++)
    {
        l[i] = arr[i];
    }
    int j = n/2;
    for(int i = 0; i <= n/2; i++)
    {
        r[i] = arr[j];
        j++;
    }
    for(int i = 0; i < n/2; i++)
    {
        cout<<l[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i <= n/2; i++)
    {
        cout<<r[i]<<" ";
    }
}
