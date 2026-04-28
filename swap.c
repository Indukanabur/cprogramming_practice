#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("before swap:x=%d y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swap:x=%d y=%d\n",x,y);
    return 0;
}