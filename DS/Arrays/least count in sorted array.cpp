#include<iostream>
using namespace std;
///least occurring element in sorted array
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    int max1 = ar[0];
    for(int i = 1; i < n; i++) {
        if(ar[i] > max1) {
            max1 = ar[i];
        }
    }
    int h[max1+1];
    for(int i = 0; i < max1+1; i++) {
        h[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        h[ar[i]]++;
    }

    /*cout<<"hashed arr: ";
    for(int i = 0; i < max1+1; i++) {
        cout<<i<<" "<<h[i]<<endl;
    }*/
    int m = 9999;
    int index = 0;

    for(int i = 0; i < max1+1; i++) {
        if(h[i] != 0) {
            if(h[i] < m) {
                m = h[i];
                index = i;
            }
        }
    }
    cout<<index;
}
