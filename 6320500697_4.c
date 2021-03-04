#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1000] ,w[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *p;
    int i=0,j=0,k=0;
    scanf("%[^\n]s",s);
    p=strtok(s," ");
    while(p!=NULL)
    {
        for(k=0;k<11;k++)
        {
            if (strcmp(p,w[k]))
            {
                i++;
            }
        }
        if(i==11||j==0)
        {
            printf ("%c",toupper(p[0]));
            p = strtok(NULL," ");
            j++,i=0;
        }
    }
    return 0;
}
