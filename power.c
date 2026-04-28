#include<stdio.h>
int power(int b,int e)
{
    if(e==0)
    return 1;
    else
    return b*power(b,e-1);
}
int main()
{
    int base,exp;
    scanf("%d%d",&base,&exp);
    printf("%d",power(base,exp));
    return 0;
}