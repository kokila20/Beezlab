
#include <stdio.h>
#include <string.h>

int noofone(int num){
    int count=0;
    while(num>0){
        if(num%10==1){
            count++;
        }
        num=num/10;
    }
    return count;
}
int main()
{
  int start,end,onecount=0;
  printf("Start Range:\n");
  scanf("%d",&start);
  printf("End Range:\n");
  scanf("%d",&end);
  for(int index=start;index<=end;index++){
      onecount=onecount+noofone(index);
  }
  printf("The number of ones present from %d to %d is %d one's",start,end,onecount);

}