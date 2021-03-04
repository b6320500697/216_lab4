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
        for (k=i;k<i+3;k++)
        {
            sum+=(number[k][0]*4)+(number[k][1]*2)+(number[k][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            max1=i;
        }
        if(min>sum)
        {
            min=sum;
            min1=i;
        }
        sum=0;
    }
    printf ("%d %d",max1+1,min1+1);
    return 0;
}
