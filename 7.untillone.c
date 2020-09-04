#include <stdio.h>
int digit(int number){
    int count=0;
    while(number>0){
        number=number/10;
        count++;
    }
    return count;
}
int untillone(int num){
    if(digit(num)==1){
        return num;
    }
    else{
        int sum=0;
        while(num>0){
            sum=sum+num%10;
            num=num/10;
        }
        return untillone(sum);
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",untillone(num));
}
