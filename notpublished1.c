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
    int alpha[26][10]={{0}};
    int pos[26]={0};
    int l=strlen(s),i,d,max=0,c1=0,c2=0,j=0,beg=0,end=0,init=0,final=0;
    for(i=0;i<l;i++)
    {
        d=s[i]-97;
        //printf("%d ",d);
        alpha[d][pos[d]]=i;
        pos[d]++;
        
    }
    for(i=0;i<26;i++)
    {
        alpha[i][pos[i]]=l;
        pos[i]++;
    }
    
    for(i=0;i<26;i++)
    {
        printf("%d: ",i);
        for(j=0;j<pos[i];j++)
        {
            printf(" %d",alpha[i][j]);
        }
        printf("\n");
        
        c1=0;
        c2=0;
        for(j=1;j<pos[i];j++)
        {
            c1=alpha[i][j]-alpha[i][j-1];
            
            if(c1>c2)
            {
                c2=c1;
                beg=alpha[i][j-1];
                end=alpha[i][j];
            }
        }
        if(c2>max)
        {
            max=c2;
            init=beg;
            final=end;
        }
        
    }
    printf("%d ",max);
}
