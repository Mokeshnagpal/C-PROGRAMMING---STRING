#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[20],a[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    for(int i=0;i<n;i++)
    if(c[i]==' ')
        c[i]='\0';
        printf("Input the string to be searched -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    if(strcmp(c,a)==0)
        x++;
    for(int i=0;i<n;i++)
    {
        if(strcmp(&c[i+1],a)==0)
        x++;
    }
    printf("\nFrequency of %s is %d",a,x);
    return 0;
}
