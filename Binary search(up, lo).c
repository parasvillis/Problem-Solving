#include<stdio.h>
int main()
{
    int a[10] = {10, 10, 20, 20, 20, 30, 30, 30, 30, 40};
    int l = 0;
    int r = 9;
    int ub = 0, num;
    scanf("%d", &num);
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(l == r)
        {
            ub = l;
            break;
        }
        if(a[mid] <= num)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
        //printf("h");
    }
    printf("%d ", ub);
    int lo = 0;
    l=0;
    r=9;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(l == r)
        {
            lo = l;
            break;
        }
        if(a[mid] < num)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
        //printf("h");
    }
    printf("%d", lo);
}
