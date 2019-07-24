#include<iostream>
using namespace std;
//TIME COMPLEXITY: O(n2)
void bubblesort(int arr[], int n)
{
    int t = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr, n);
}
