#include<iostream>
using namespace std;
///time complexity :- O(n)
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }

    int non_zero = 0;
    for(int i = 0; i < n; i++) {
        if(ar[i] != 0) {
            ar[non_zero] = ar[i];
            non_zero++;
        }
    }
    for(int i = non_zero; i < n; i++) {
        ar[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        cout<<ar[i]<<" ";
    }
}
