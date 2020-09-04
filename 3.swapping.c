
#include <stdio.h>
#include <string.h>

int main()
{
   int x,y;
   printf("Enter x and y\n");
   scanf("%d\n%d",&x,&y);
   printf("Before Swapping\nx=%d\ny=%d\n",x,y);
   x=x*y;
   y=x/y;
   x=x/y;
   printf("After Swapping without a third variable\nx=%d\ny=%d",x,y);
}

