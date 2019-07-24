#include<iostream>
using namespace std;
/// Input :- [1, 4, 5, 7] ---->  [2, 3, 6]  as output
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int x = 0;
    for(int i = ar[0]; i < ar[n-1]; i++)
    {
        if(ar[x] != i)
        {
            cout<<i<<" ";
            x--;
        }
        x++;
    }
}
