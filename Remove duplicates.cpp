#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int j = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == a[j]) {
            continue;
        }
        if(a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
}
