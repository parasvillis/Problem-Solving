#include<iostream>
#include<cstdlib>
using namespace std;


bool possible(int i, int k, int a[])
{
    for(int j = 0; j < k-1; j++) {
        if(a[j] == i || abs(a[j] - k) == abs(j - i) /*diagonal condition*/) {
            cout<<"b";
            return false;
        }
        return true;
    }
}

void queen(int k, int n, int a[])
{
    for(int i = 0; i < n; i++) {
        if(possible(i, k, a)) {
            a[k] = i;
            if(k == n) {
                for(int j = 0; j < n; j++) {
                    cout<<"a";
                    cout<<a[j];
                    break;
                }
            }
            else {
                queen(k-1, n, a);
            }
        }
    }
}

int main()
{
    int k, n;
    cin>>k;
    int a[k];
    queen(k, n, a);
}
