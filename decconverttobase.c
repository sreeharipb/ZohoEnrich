#include <stdio.h>

int main(void)
{
    long int n,b;
    scanf("%ld\n%ld",&n,&b);
    long int x=n;
    int i=0;
    n=0;
    while(x>=1)
    {
        n+=(x%b)*pow(10,i);
        x=x/b;
        i++;
    }
    printf("%ld",n);
	return 0;
}

