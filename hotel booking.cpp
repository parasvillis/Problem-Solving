#include<iostream>
#include<cstdlib>
using namespace std;

int compare(const void* a, const void* b)
{
    const int* x = (int*)a;
    const int* y = (int*)b;

    if(*x > *y) {
        return 1;
    }

    else if(*x < *y) {
        return -1;
    }

    return 0;
}

bool hotel(int* ari, int* dep, int n, int k)
{
    int i = 0, j = 0, c = 0;
    while(i < n && j < n) {
        if(ari[i] < dep[j]) {
            c++;
            i++;
        }
        else {
            j++;
            c--;
        }
        if(c > k) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int ari[n], dep[n];

    for(int i = 0; i < n; i++) {
        cin>>ari[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>dep[i];
    }
    int k;
    cin>>k;

    qsort(ari, n, sizeof(ari[0]), compare);
    qsort(dep, n, sizeof(dep[0]), compare);

    if(hotel(ari, dep, n, k)) {
        cout<<"\nyes";
    }
    else {
        cout<<"\nno";
    }



    /*for(int i = 0; i < n; i++) {
        cout<<ari[i]<<" ";
    }
    cout<<endl;


    for(int i = 0; i < n; i++) {
        cout<<dep[i]<<" ";
    }
    cout<<endl;*/
}
