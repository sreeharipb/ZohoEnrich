#include <stdio.h>

int main(void) 
{
    char s[1000],z[1000],res[1000];
    scanf("%s",s);
    int c[1000];
    int i,j,k=0,t=0;
    for(i=0;s[i]!='\0';)
    {
        z[k]=s[i];
        for(j=i;s[j]==s[i];j++)
        {
            c[k]++;
            
        }
        
        i=j;
        k++;
        
    }
    
    /*for(i=0;i<k;i++)
    {
        printf("%c%d",z[i],c[i]); 
    }
    */
    
    for(i=k-1;i>=0;i--)
    {
        
        
        while(c[i]>=1)
        {
            char temp=c[i]%10+'0';
            res[t++]=temp;
            c[i]/=10;
        }
        res[t++]=z[i];
        
    }
	
	i=0;
	j=t-1;
	while(i<=j)
	{
	    char ch=res[i];
	    res[i]=res[j];
	    res[j]=ch;
	    
	    i++;
	    j--;
	}
	printf("%s",res);
	
	return 0;
}

