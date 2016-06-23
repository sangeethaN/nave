#include <stdio.h>
#include<string.h>
int main()
{
 char a[10];
 int i,n;
 scanf("%s",a);
 n=strlen(a);
 for(i=n-1;i>=0;i--)
 {
     printf("%c",a[i]);
 }
 printf("\n");
 for(i=n-1;i>=0;i--)
 {
  if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='A' && a[i]!='E' && a[i]!='I'&& a[i]!='O' && a[i]!='U'){
  printf("%c",a[i]);
 }
 }
    return 0;
}
