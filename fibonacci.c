#include <stdio.h>
int main()
{
    int n,first=0,sec=1,next;
    scanf("%d",&n);
    printf("%d\n%d\n",first,sec);
    for(int i=3;i<=n;i++)
    {
        next=first+sec;
        printf("%d\n",next);
        first=sec;
        sec=next;
    }
    return 0;
}
