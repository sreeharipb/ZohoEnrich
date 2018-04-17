#include <stdio.h>
#include<string.h>
void lsub(char *);

int main(void) 
{
    char s[1000];
    scanf("%s",s);
    //printf("%s",s);
    lsub(s);
	return 0;
}

void lsub(char *s)
{
    int l=strlen(s),i,j,k;
   // printf("%d",l);
    int max=0,c,m,init=0,final=0;

    for(i=0;i<l;i++)
    {   
        c=1;
        for(j=i+1;(s[j]!=s[i])&&(s[j]!='\0');j++)
        {
            c++;
        }
        
        
        if(c>max)
        {
            max=c;
            init=i;
            final=j;
        }
    }
    for(i=init;i<final;i++)
    {
        printf("%c",s[i]);
    }
}
