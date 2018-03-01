#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int num,n,div,temp,l=0;
  scanf("%lld",&num);
  scanf("%lld",&n);
  
  temp=num;
  while(temp>=1)
  {
    l++;
    temp=temp/10;
  }

  n=n%l;
  div=pow(10,n);
  
  printf("%lld%lld",num%div,num/div);
 
  return 0;
}
  
    
  
