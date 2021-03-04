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
        }

    }
    return 0;
}
