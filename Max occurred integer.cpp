#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l[n], r[n];
    int m = -999;
    for(int i = 0; i < n; i++) {
        cin>>l[i];
        if(l[i] > m) {
            m = l[i];
        }
    }
    for(int i = 0; i < n; i++) {
        cin>>r[i];
        if(r[i] > m) {
            m = r[i];
        }
    }
    m++;
    int a[m];
    for(int i = 0; i < m; i++) {
        a[i] = 0;
    }

    int k = 0, c = 0;
    while(n--) {
        a[l[k]]++;
        a[(r[c]+1)]--;
        k++;
        c++;
    }

    int sum = 0, s = a[0];
    for(int i = 1; i < m; i++) {
        sum += a[i];
        if(s < sum) {
            s = sum;
        }
    }

    cout<<s;
}
