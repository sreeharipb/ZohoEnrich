#include<stdio.h>
int main()
{
  long long int n;
  scanf("%lld",&n);
  long long int x=n,c=0;
  while(x>0)
  {
    if(x%2==1) 
    {
      c++;
    }
    x=x/2;
  }
  
  printf("%lld",c);
  
  return 0;
}
      
    
    
    
