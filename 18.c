#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    for(int i=0;i<l;i++)
    {
        printf("ASCII value of %c is %d\n",c[i],c[i]);
    }
    return 0;
}
