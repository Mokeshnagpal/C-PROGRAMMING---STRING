#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0,c=0;
    char a[30],b;
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input a character to replace with blanks -\n");
    fflush(stdin);
    scanf("%c",&b);
    fflush(stdin);
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            a[i]=b;
        }
    }
    printf("New string - %s",a);
    return 0;
}
