#include <stdio.h>

int main(void)
{
    char num[100][10];
    int len[100];
    int sign[100],negc=0;
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sign[i]=1;
    }

    for(i=0;i<n;i++)
    {
        scanf("%s",num[i]);
        j=0;
        if(num[i][0]=='-')
        {
            j++;
            sign[i]=-1;      //negative means -1
            negc++;
        }
        else if(num[i][0]=='+')
        {
            j++;
            //sign[i]=1;      //positive means 1
        }
        while(num[i][j]=='0')
        {
            j++;
        }
        len[i]=strlen(num[i])-j;
    }                                   // numbers, lengths, signs

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(sign[i]>sign[j])
            {
                char temp[10];
                strcpy(temp,num[i]);
                strcpy(num[i],num[j]);
                strcpy(num[j],temp);

                int t1=sign[i];
                sign[i]=sign[j];
                sign[j]=t1;

                int t2=len[i];
                len[i]=len[j];
                len[j]=t2;
            }
        }

    }                                   // negative positive
    //printf("%d",negc);

    for(i=0;i<negc;i++)
    {
        for(j=i+1;j<negc;j++)
        {
            if(len[i]<len[j])
            {
                char temp[10];
                strcpy(temp,num[i]);
                strcpy(num[i],num[j]);
                strcpy(num[j],temp);

                int t1=len[i];
                len[i]=len[j];
                len[j]=t1;
            }
            else if(len[i]==len[j])
            {
                int k=1;        //k=1 for neg ,k=0 or 1 for positive

                while(1)
                {
                    if(num[i][k]<num[j][k])
                    {
                        char temp[10];
                        strcpy(temp,num[i]);
                        strcpy(num[i],num[j]);
                        strcpy(num[j],temp);
                        break;

                    }
                    else if(num[i][k]==num[j][k])
                    {
                        k++;
                    }
                    else
                    {
                        break;
                    }


                }
            }

        }
    }

    for(i=negc;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(len[i]>len[j])
            {
                 char temp[10];
                 strcpy(temp,num[i]);
                 strcpy(num[i],num[j]);
                 strcpy(num[j],temp);

                 int t1=len[i];
                 len[i]=len[j];
                 len[j]=t1;
            }
            else if(len[i]==len[j])
            {
                int k=0,l=0;
                if(num[i][0]=='+')
                {
                    k=1;
                }
                if(num[j][0]=='+')
                {
                    l=1;
                }

                while(1)
                {
                    if(num[i][k]>num[j][l])
                    {
                        char temp[10];
                        strcpy(temp,num[i]);
                        strcpy(num[i],num[j]);
                        strcpy(num[j],temp);
                        break;
                    }
                    else if(num[i][k]==num[j][l])
                    {
                        k++;
                        l++;

                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%s\t",num[i]);
    }









	return 0;
}
