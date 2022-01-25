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
    strupr(c);
    printf("New string -\n");
    for(int i=65;i<=90;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[j]==(int)i)
                printf("%c",c[j]);
        }
    }
    return 0;
}
