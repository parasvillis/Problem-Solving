#include<iostream>
using namespace std;
///if number is 123 --> sum = (1+2+3)+(2+3)+(3) = 14
int main()
{
    int n, len;
    cout<<"Enter Length: ";
    cin>>len;
    cout<<"Enter Number: ";
    cin>>n;
    int ar[len];
    for(int i = len-1; i >= 0; i--)
    {
        ar[i] = n%10;
        n /= 10;
    }
    int l = len;
    int sum = 0, j = 0;
    while(l != 0)
    {
        //cout<<"l is:"<<l<<endl;
        for(int i = j; i < len; i++)
        {
            sum += ar[i];
            //cout<<"i and j is:"<<i<<" "<<j<<endl;
            //cout<<"Sum is:"<<sum<<endl;
        }
        j++;
    l--;

    }
    cout<<sum<<endl;
}
