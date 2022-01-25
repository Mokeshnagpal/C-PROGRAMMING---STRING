#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,j=0,x=0;
    char c[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    strupr(c);
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
    printf("New string -\n");
    for(int i=0;i<n;i++)
    {
        if(c[i]==' ')
            c[i]='\0';
    }
    printf("%s ",c);
    for(int i=0;i<n;i++)
    {
        if(c[i]=='\0')
        {
            j=i+1;
            break;
        }
    }
    for(int i=j;i<n;i++)
    {
        if(c[i]=='\0')
        {
            printf("%s ",&c[i+1]);
        }
    }
    printf("%s",&c[j]);
    return 0;
}
