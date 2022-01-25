#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,u=0,l=0,d=0,s=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    strcpy(c,strupr(c));
    n=strlen(c);
    printf("New string -\n");
    for(int i=0;i<n;i++)
    {
        if(c[i]!='A'&&c[i]!='E'&&c[i]!='I'&&c[i]!='O'&&c[i]!='U')
        {
            printf("%c",c[i]);
        }
    }
    return 0;
}
