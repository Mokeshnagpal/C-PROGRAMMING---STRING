#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0;
    char c[20],o,n;
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    printf("Input the old character to be replace -\n");
    fflush(stdin);
    scanf("%c",&o);
    fflush(stdin);
    l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(c[i]==o)
            c[i]='*';
    }
    printf("New string after replacement - %s",c);
    return 0;
}
