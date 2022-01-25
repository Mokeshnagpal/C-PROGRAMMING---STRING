#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
     for(int i=0;i<n;i++)
    {
        if(c[i]==' ')
            x++;
    }
    if(x!=2)
    {
        printf("Wrong input !!!");
        exit(0);
    }
    for(int i=0;i<n;i++)
    if(c[i]==' ')
        c[i]='\0';
        printf("New string -\n");
    for(int i=n-1;i>=0;i--)
    {
        if(c[i]=='\0')
            printf("%s ",&c[i+1]);
    }
    printf("%s",c);
    return 0;
}
