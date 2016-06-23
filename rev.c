#include <stdio.h>

int main()
{
    char a[1000000];
    int n=0,i;
    scanf("%s",a);
   
    for(i=0;i<a[i]!='\0';i++)
    n++;
   
    for(i=n-1;i>=0;i--)
    printf("%c",a[i]);
    
    return 0;
}
