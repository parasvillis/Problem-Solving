#include<iostream>
#include<cstdlib>
using namespace std;

int compare(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;

    if(*x > *y) {
        return 1;
    }
    else if(*x < *y) {
        return -1;
    }
    return 0;
}

void* wave(int *ar, int n)
{
    int t = 0;
    for(int i = 0; i < n-1; i=i+2) {
        t = ar[i];
        ar[i] = ar[i+1];
        ar[i+1] = t;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    qsort(a, n, sizeof(a[0]), compare);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    wave(a, n);

    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
}
