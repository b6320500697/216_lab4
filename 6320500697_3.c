#include <stdio.h>
#include <string.h>
int main ()
{
    char word[200];
    int k=0,j;
    gets(word);
    j=strlen(word);
    while (k<j)
    {
        if (word[k-1]!=word[k])
        {
            printf ("%c",word[k]);
        }
        k++;
    }
    return 0;
}
