#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x=0,l=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    for(int i=0;i<l;i++)
        {
    if((int)c[i]>64&&(int)c[i]<91)
            c[i]=(char)((int)(c[i])+32);
    else if((int)c[i]>96&&(int)c[i]<123)
            c[i]=(char)((int)(c[i])-32);
        }
    printf("\n%s",c);
    return 0;
}
