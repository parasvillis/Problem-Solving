#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter size: \n";
    int n;
    cin>>n;
    int ar[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    int m = 0;
    for(int i = 0; i < n; i++) {
        if(ar[i] > m) {
            m = ar[i];
        }
    }
    int h[m+1];
    for(int i = 0; i < m+1; i++) {
        h[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        h[ar[i]]++;
    }

    int t;
    int ar1[m+1];
    for(int i = 0; i < m+1; i++) {
        ar1[i] = h[i];
    }

    cout<<"hashed array: ";
    for(int i = 0; i < m+1; i++) {
        cout<<h[i]<<" ";
    }
    cout<<endl;

    int x = m+1;
    for(int i = 0; i < x; i++)
    {
        for(int j = i+1; j < x; j++)
        {
            if(h[i] == h[j])
            {
                for(int k = j; k < x; k++)
                {
                    h[k] = h[k + 1];
                }
                x--;
                j--;
            }
        }
    }

    cout<<"Unique hashed array: ";
    for(int i = 0; i < x; i++)
    {
        cout<<h[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i < x; i++) {
            for(int j = i+1; j < x; j++) {
                if(h[j] < h[i]) {
                    t = h[j];
                    h[j] = h[i];
                    h[i] = t;
                }
            }
        }

    cout<<"Unique sorted hashed array: ";
    for(int i = 0; i < x; i++) {
        cout<<h[i]<<" ";
    }
    cout<<endl;


    int sec = h[x-2];
    cout<<"Sec: "<<sec<<endl;
    cout<<"\nSecond highest occurring elements: ";
    for(int i = 0; i < m+1; i++) {
        if(ar1[i] == sec) {
            cout<<i<<" ";
        }
    }

}
