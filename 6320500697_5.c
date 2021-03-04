#include <stdio.h>
int main ()
{
    char c[100];
    int n,b[4],j,i,t;
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
        }

    }
    return 0;
}
