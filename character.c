#include <stdio.h>

int main()
{
   char a;
   scanf("%c",&a);
   if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
  printf("\nThe character is an alphabet");
  }
  else
  printf("\nThe character is not an alphabet");
    return 0;
}
