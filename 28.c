#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[30],a[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    strupr(c);
    printf("PIG LATIN FORM - \n");
    for(int i=0;i<n;i++)
    {
        if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        {
            x=i;
            printf("%s",(&c[i]));
            break;
        }
    }
    for(int i=0;i<x;i++)
    {
        printf("%c",c[i]);
    }
    printf("AY");
    return 0;
}

