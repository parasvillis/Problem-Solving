#include<iostream>
using namespace std;

int main()
{
    int n, c = 1;
    cin>>n;
    int ar[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ar[i][j] = c++;
        }
    }

    cout<<"original: "<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<ar[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n/2; i++) {
        for(int j = i; j < n-i-1; j++) {
            int temp = ar[i][j];
            ar[i][j] = ar[n-1-j][i];
            ar[n-1-j][i] = ar[n-1-i][n-1-j];
            ar[n-1-i][n-1-j] = ar[j][n-1-i];
            ar[j][n-1-i] = temp;
        }
    }

    cout<<"After rotating: "<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<ar[i][j]<<"  ";
        }
        cout<<endl;
    }
}
