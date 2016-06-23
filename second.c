#include <stdio.h>
int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
  int arr[100],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  qsort(arr,n,sizeof(int),cmp);
  printf("%d",arr[1]);
    return 0;
}
