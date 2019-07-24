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
    int sum = 0, r_sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ar[i];
    }
    //cout<<"sum: "<<sum<<endl;
    for(int i = 0; i < n; i++) {
        sum -= ar[i];
        //cout<<"-ve sum: "<<sum<<endl;
        if(sum == r_sum || sum < r_sum) {
            cout<<i;
            break;
        }
    }
}
