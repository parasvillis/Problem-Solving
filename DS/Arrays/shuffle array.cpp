#include<iostream>
using namespace std;
/// randomly shuffle the array(pattern followed is to swap even and odd(adjacent) indexes)
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    int t;
    for(int i = 0; i < n-1; i=i+2) {
        //cout<<i<<"    ";
        t = ar[i];
        ar[i] = ar[i+1];
        ar[i+1] = t;
        //i++;
        cout<<ar[i]<<" "<<i<<endl;
    }
    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<ar[i]<<" ";
    }
}
