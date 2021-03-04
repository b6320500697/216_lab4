#include <stdio.h>
int main ()
{
    int n,i,k;
    scanf ("%d",&n);
    int number [n][3];
    for (i=0;i<n;i++)
    {
        for (k=0;k<3;k++)
        {
            scanf ("%d",&number[i][k]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (k=0;k<3;k++)
        {
            printf ("%d",&number[i][k]);
        }
    }

}
