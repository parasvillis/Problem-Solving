#include<iostream>
using namespace std;
///merge an array of size 'n' into an array of size 'm+n' having 'm' elements
int main()
{
    int n, m;
    cin>>n;
    int ar1[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ar1[i];
    }
    cin>>m;
    int ar2[m+n];
    for(int i = 0; i < m; i++)
    {
        cin>>ar2[i];
    }
    int x = 0;
    for(int i = m; i < m+n; i++)
    {
        ar2[i] = ar1[x];
        x++;
    }
    for(int i = 0; i < m+n; i++)
    {
        cout<<ar2[i]<<" ";
    }
}
