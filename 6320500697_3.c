#include <stdio.h>
#include <string.h>
int main ()
{
    char word[200];
    int k;
    gets(word);
    for (k=0;k<=strlen(word);k++)
    {
        if (word[k-1]!=word[k])
        {
            printf ("%c",word[k]);
        }
    }
    return 0;
}
