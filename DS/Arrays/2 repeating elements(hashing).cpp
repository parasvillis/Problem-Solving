#include<iostream>
using namespace std;
///print those numbers that have only 2 repetitions
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }

    int m = 0;                          ///finding maximum element in the array(size of hash array)
    for(int i = 1; i < n; i++)
    {
        if(ar[i] > m)
        {
            m = ar[i];
        }
    }

    int h[m+1];
    for(int i = 0; i < m+1; i++)
    {
        h[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        h[ar[i]]++;
    }

    for(int i = 0; i < m+1; i++)
    {
        if(h[i] == 2)
        {
            cout<<i<<" ";
        }
    }
}
