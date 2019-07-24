#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int ar[n];
    cout<<"\nEnter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int even[n], odd[n];
    int x = 0, y = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i]%2 == 0)
        {
            even[x] = ar[i];
            x++;
        }
        else
        {
            odd[y] = ar[i];
            y++;
        }
    }
    cout<<"\nEven elements: ";
    for(int i = 0; i < x; i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nOdd elements: ";
    for(int i = 0; i < y; i++)
    {
        cout<<odd[i]<<" ";
    }
}
