#include<iostream>
using namespace std;

int main()
{
    int n;
    /*cout<<"Enter n: ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }*/
    int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, i = 0, c = 0;
    cout<<"Enter k: ";
    cin>>k;
    int l = 0, r = 9;

    while(l <= r)
    {
        int mid = (l+r)/2;
        int dif = k - ar[2];
        if(ar[mid] == dif)
        {
            c++;
            i++;
            break;
        }
        if(ar[mid] < dif)
        {
            l = mid + 1;
        }
        if(ar[mid] > dif)
        {
            r = mid;
        }
    }
    cout<<c<<" ";
    cout<<l;
    //cout<<ar[l];
    /*for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(ar[i]+ar[j] == k)
            {
                c++;
            }
        }
    }
    cout<<c;*/
}

