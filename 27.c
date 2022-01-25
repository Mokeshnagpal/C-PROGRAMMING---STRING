#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[30],a[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    for(int i=n-1;i>=0;i--)
    {
        a[n-1-i]=c[i];
    }
    if(strcmp(a,c)==0)
        printf("The string is palindromic");
    else
        printf("The string is not palindromic");
    return 0;
}
