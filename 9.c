#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    x=strlen(c);
    for(int i=0;i<x;i++)
    {
        if(c[i]=='m')
            c[i]='n';
    }
    printf("\nNew string - %s",c);
    return 0;
}
