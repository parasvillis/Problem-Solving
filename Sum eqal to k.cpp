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
    //int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, c = 0;
    cout<<"Enter k: ";
    cin>>k;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ar[i]+ar[j] == k)
            {
                c++;
            }
        }
    }
    cout<<c;
}
