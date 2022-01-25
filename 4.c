#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a[25];
    int c=0;
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    printf("Length of string -%d",strlen(a));
}
