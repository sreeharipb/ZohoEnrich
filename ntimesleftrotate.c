#include<stdio.h>
int main()
{
  char num[200];
  scanf("%s",num);
  int n,i,l=strlen(num);
  scanf("%d",&n);
  n=n%l;
  
  for(i=l-n;i<l;i++)
  {
    printf("%c",num[i]);
  }
  for(i=0;i<l-n;i++)
  {
    printf("%c",num[i]);
  }
  return 0;
}
    
  
