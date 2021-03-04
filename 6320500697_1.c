#include <stdio.h>
int main ()
{
    int n,i,k,min=2000,max=0,min1=0,sum=0,max1=0;
    scanf ("%d",&n);
    int number [n][3];
    for (i=0;i<n;i++)
    {
        for (k=0;k<3;k++)
        {
            scanf ("%d",&number[i][k]);
        }
    }
    for(i=0;i<n-2;i++)
    {
        for (k=i;k<i+3;i++)
        {
            sum+=(number[k][0]*4)+(number[k][1]*2)+(number[k][2]*1);
        }
        if(max<sum)
        {
            max=su,;
            max1=i;
        }

    }
}
