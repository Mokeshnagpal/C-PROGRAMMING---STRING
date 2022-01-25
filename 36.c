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
    printf("Initials -\n");
    if(isalpha(c[0]))
        printf("%c.",toupper(c[0]));
    for(int i=1;i<l;i++)
    {
        if(c[i-1]==' ')
            printf("%c ",toupper(c[i]));
    }
    return 0;
}
