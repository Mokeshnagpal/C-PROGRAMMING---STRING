#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    strlwr(c);
    c[0]=(char)((int)c[0]-32);
    for(int i=0;i<n;i++)
    {
        if(c[i]==' ')
            c[i+1]=(char)((int)c[i+1]-32);
    }
    printf("New string - %s",c);
    return 0;
}
