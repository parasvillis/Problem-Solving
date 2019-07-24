#include<iostream>
using namespace std;
///time complexity is intermediate...O(n2).
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int count_zero = 0;
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
        if(ar[i] == 0) {
            count_zero++;
        }
    }

    int t = 0;
    while(t != count_zero) {
        for(int i = 0; i < n-1; i++) {
            if(ar[i] == 0) {
                for(int j = i; j < n; j++) {
                    ar[j] = ar[j+1];
                }
                ar[n-1] = 0;
            }
        }
        t++;
    }
    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<ar[i]<<" ";
    }
}
