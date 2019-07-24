#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int counter, store = 0;
    for(int i = 0; i < n; i++)
    {
        counter = 1;
        for(int j = i+1; j < n; j++)
        {
            if(ar[i] == ar[j])
            {
                counter++;
                store = ar[j];
                ar[j] = -9999;
            }
            cout<<counter<<"\n";
        }
        if(counter == 2)
        {
            cout<<"store: \n"<<store<<" ";
        }
    }
}
