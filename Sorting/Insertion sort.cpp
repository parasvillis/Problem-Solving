#include<iostream>
using namespace std;
//TIME COMPLEXITY: O(n) and O(n2)
void insertionsort(int arr[], int n)
{
    int value;
    int temp = 0;
    for(int i = 1; i < n; i++)
    {
        value = arr[i];
        int hole = i;
        while(hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole-1];
            hole = hole - 1;
        }
        arr[hole] = value;
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
    insertionsort(arr, n);
}
