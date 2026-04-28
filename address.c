#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    printf("printing address....");
    for(int i=0;i<n;i++)
    {
        printf("address of element %d:%p\n",i,(a+i));
    }
    printf("printing valves...\n");
    for(int i=0;i<n;i++)
    {
        printf("address of element %d:%d\n",i,*(a+i));
    }
}