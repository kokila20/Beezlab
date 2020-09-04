
#include <stdio.h>
#include <string.h>
int main()
{
  char string[1000];int count=0;
  scanf("%[^\n]",string);
  for(int i=0;i<strlen(string);i++){
      if(string[i]!=' '){
          count++;
      }
  }
  printf("%d",count);
}
