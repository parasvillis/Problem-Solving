#include<iostream>
using namespace std;
///find majority element in an array(majority element in an array of size 'n' is that element that
                                     /// occurs more than 'n/2' times. hence it is at most one element in array).

int main()
{
    int n;
    cin>>n;
    int ar[n];
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

    for(int i = 0; i < m+1; i++) {
        if(h[i] > n/2) {
            cout<<i;
        }
    }

}
