#include<iostream>
using namespace std;

int main()
{
    int n, c = 1;
    cin>>n;
    int ar[n][n];
    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ar[i][j] = c++;
        }
    }*/

    int res[n][n];
    int top = 0, right = n-1, bottom = n-1, left = 0;

    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) {
            res[top][i] = c++;
        }
        top++;

        for(int i = top; i <= bottom; i++) {
            res[i][right] = c++;
        }
        right--;

        for(int i = right; i >= left; i--) {
            res[bottom][i] = c++;
        }
        bottom--;

        for(int i = bottom; i >= top; i--) {
            res[i][left] = c++;
        }
        left++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }
}
