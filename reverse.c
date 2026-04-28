#include<stdio.h>
int main()
{
    int a[]={7,8,9,10,11,12};
    int n=sizeof(a)/sizeof(a[0]);
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    printf("reversed array:");
    for(int i=0;i<n;i++)
    printf("%d ",a[i] );
    return 0;
}