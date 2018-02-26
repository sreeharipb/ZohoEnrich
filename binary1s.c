#include<stdio.h>
int main()
{
  long long int n;
  scanf("%lld",&n);
  long long int x=n,c=0;
  while(x>0)
  {
    c+=(x%2==1);
    x=x/2;
  }
  
  printf("%lld",c);
  
  return 0;
}
      
    
    
    
