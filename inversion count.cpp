#include<iostream>
using namespace std;

int mergesort(int arr[], int l, int r, int mid)
{
    int i_count = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
    {
        left[i] = arr[l+i];
    }
    for(int i = 0; i < n2; i++)
    {
        right[i] = arr[mid+1+i];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2)
    {
        if(left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            i_count = n1 - i + 1;
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    cout<<"i_count"<<i_count<<endl;
    return i_count;
}

int divide(int arr[], int l, int r)
{
    if(l < r)
    {
        int mid = l+(r-l)/2;
        int ic1 = divide(arr, l, mid);
        int ic2 = divide(arr, mid+1, r);
        cout<<"ic1: "<<ic1<<endl;
        cout<<"ic2: "<<ic2<<endl;
        return ic1 + ic2 + mergesort(arr, l, r, mid);
    }
    return 0;
}

/*void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}  2 6 3 4 9 1 7
*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int inversion_count = divide(arr, 0, n);
    cout<<"Inversion count is: "<<inversion_count;
    //print(arr, n);
}
