#include <stdio.h>
#include <string.h>
int main ()
{
    char c[100];
    int n,b[4],j,i,t,t1;
    scanf ("%d",&n);
    for(j=0;j<n;j++)
    {
        b[0]=1;

        scanf("%s",c);
        for(i=0;i<strlen(c);i++)
        {
            if(c[i]=='A')
            {
                t = b[1];
                b[1] = b[2];
                b[2] = t;
            }
            else if(c[i]=='B')
            {
                t = b[0];
                b[0] = b[3];
                b[3] = t;
            }
            else if(c[i]=='C')
            {
                t = b[0];
                b[0] = b[2];
                b[2] = t;
                t1 = b[1];
                b[1] = b[3];
                b[3] = t;
            }
            else if(c[i]=='D')
            {
                t = b[0];
                b[0] = b[1];
                b[1] = t;
                t1 = b[2];
                b[2] = b[3];
                b[3] = t1;
            }
            else if(c[i]=='E')
            {
                t = b[0];
                b[0] = b[3];
                b[3] = t;
                t1 = b[2];
                b[2] = b[1];
                b[1] = t1;
            }
        }
        for(i=0;i<4;i++)
        {
            if(b[i]==1)
            {
                printf("%d\n",i+1);
            }
            b[i] = 0;
        }
    }
    return 0;
}
