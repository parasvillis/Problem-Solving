#include<iostream>
using namespace std;
//TIME COMPLEXITY: O(n2)
void selectionsort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int mn = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[mn])
            {
                mn = j;
            }
        }
        int temp = arr[mn];
        arr[mn] = arr[i];
        arr[i] = temp;
    }
    for(int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr, n);
}
