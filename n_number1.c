#include <stdio.h>

int main(){
  int a=0;
  int n;
  printf("Enter your number:");
  scanf("%d",&n);
  for ( a+1; a < n; a++)
  {
    printf("%d\n",a+1);
  }
  
  
  return 0;
}