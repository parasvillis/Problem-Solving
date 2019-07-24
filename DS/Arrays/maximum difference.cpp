#include<iostream>
using namespace std;
/// maximum difference between 2 elements of an array
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
    /*cout<<"sorted arr: ";
    for(int i = 0; i < n; i++) {
        cout<<ar[i]<<" ";
    }*/
    cout<<(ar[n-1] - ar[0]);
}
