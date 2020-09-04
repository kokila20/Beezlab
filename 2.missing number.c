#include <stdio.h>
int missingno(int num,int arr[]){
    int ans=(num)*(num+1)/2;
    int sum=0;
    for(int index=0;index<num-1;index++){
        sum=sum+arr[index];
    }
    return ans-sum;
}
int main()
{
  
  int num;
  scanf("%d",&num);
  int arr[num];
  for(int index=0;index<num-1;index++){
      scanf("%d",&arr[index]);
  }
  printf("The missing number from 1 to %d is %d ",num,missingno(num,arr));
}
