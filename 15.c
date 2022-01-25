#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0,b=0,a=0,w=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(isblank(c[i]))
            b++;
    }
    c[l]=' ';
    for(int i=0;i<=l;i++)
    {
        if(c[i]==' ')
            w++;
        else
            a++;
    }
    printf("Number of blanks - %d\n",b);
    printf("Number of words - %d\n",w);
    printf("Number of characters - %d\n",a);
    return 0;
}
