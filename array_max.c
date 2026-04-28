#include<stdio.h>
int main()
{
   int a[]={35,42,22,28,41,26,44,15,25,12};
   int n=sizeof(a)/sizeof(a[0]);
   int max=a[0],min=a[0];
   for(int i=1;i<n;i++)
   {
    if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
   }
   printf("max:%d min:%d",max,min);
   return 0;
}