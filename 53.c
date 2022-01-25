#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0,i=0;
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input another string -\n");
    fflush(stdin);
    scanf("%[^\n]",b);
    fflush(stdin);
    l=strlen(a);
    a[l]=' ';
    while(b[i]!='\0')
    {
        a[l+i+1]=b[i];
        i++;
    }
    printf("New string - %s",a);
    return 0;
}

