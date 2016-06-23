#include <stdio.h>

int main()
{
  int n,fact=1,i=1;
  scanf("%d",&n);
 while(i<=n){
      fact=fact*i;
      i++;
 }
 
    printf("fact:%d",fact);
    return 0;
}
