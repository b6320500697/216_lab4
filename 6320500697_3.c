#include <stdio.h>
#include <string.h>
int main ()
{
    char word[200];
    int k,j;
    gets(word);
    j=strlen(word);
    for (k=0;k<=j;k++)
    {
        if (word[k-1]!=word[k])
        {
            printf ("%c",word[k]);
        }
    }
    return 0;
}
