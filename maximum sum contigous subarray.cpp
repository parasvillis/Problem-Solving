#include<iostream>
using namespace std;
///for printing the subarray use backtraking approach

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }

    int sum = ar[0];
    int itr = -999, z = 0;
    for(int i = 1; i < n; i++) {
        //itr = sum;
        if((sum + ar[i]) >= ar[i]) {
            sum += ar[i];
        }
        else {
            sum = ar[i];
        }

        if(itr < sum) {
            itr = sum;
            z = i;
        }
    }

    cout<<itr<<" "<<z<<endl;

    while(itr - ar[z] != 0) {
        cout<<ar[z]<<" ";
        itr = itr - ar[z];
        z--;
    }
    cout<<ar[z];
}
