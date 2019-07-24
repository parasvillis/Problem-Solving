#include<iostream>
using namespace std;

int sqrt(int n)
{
    int sum = 0;
    int l = 0, r = n;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(mid*mid == n)
        {
            return mid;
        }
        if(mid*mid > n)
        {
            r = mid-1;
        }
        if(mid*mid < n)
        {
            sum = mid;
            l = mid+1;
        }
        cout<<"l is: "<<l<<endl;
        cout<<"r is: "<<r<<endl;

    }
    return sum;
}

int main()
{
    int num;
    cin>>num;
    int s = sqrt(num);
    cout<<s;
}
