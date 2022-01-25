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
    n=strlen(c);
    for(int i=0;i<n;i++)
    if(c[i]==' ')
        c[i]='\0';
        printf("New string -\n");
    for(int i=0;i<n;i++)
    {
        if(i==0)
            printf("%s ",strrev(c));
        if(c[i]=='\0')
            printf("%s ",strrev(&c[i+1]));   //& is used to point the pointer to i+1 character
    }
    return 0;
}
