#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    int t = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(ar[j] < ar[i]) {
                t = ar[j];
                ar[j] = ar[i];
                ar[i] = t;
            }
        }
    }
    cout<<ar[n-2];
}
