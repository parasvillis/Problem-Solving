#include<iostream>
using namespace std;
///find all the pairs of given sum in the array [O(n2)]
int main()
{
    int n, s;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    cin>>s;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(ar[i] + ar[j] == s && i != j) {
                cout<<"("<<ar[i]<<", "<<ar[j]<<")";
            }
        }
    }
}
