#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0;
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    strcpy(b,a);
    strupr(b);
    l=strlen(a);
    printf("New string -\n");
    for(int i=65;i<=90;i++)
    {
        for(int j=0;j<l;j++)
        {
            if((int)i==b[j])
                printf("%c",a[j]);
        }
    }
    return 0;
}
