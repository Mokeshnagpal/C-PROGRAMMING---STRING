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
    l=strlen(a);
    for(int i=0;i<l;i++)
        b[i]=a[i];
    printf("New string after copying - %s",b);
    return 0;
}
