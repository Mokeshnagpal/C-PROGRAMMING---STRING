#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    if(strcmp(strrev(c),c))
        printf("String is palindromic");
    else
        printf("String is not palindromic");
    return 0;
}
