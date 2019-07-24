#include<iostream>
using namespace std;
///print sub array and length having maximum length of given sum [O(n2)]
int main()
{
    int n, s;
    cin>>n>>s;
    int ar[n];
    int l = 0, e = 0;
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += ar[j];
            if(sum == s) {
                if(l < j-i+1) {
                    l = j-i+1;
                    e = j;
                }
            }
        }
    }
    cout<<"length of sub: "<<l<<endl;
}
