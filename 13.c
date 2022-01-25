#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x=0,l=0,p=0,q=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    printf("New string - ");
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    return 0;
}
