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
    printf("Input the index number -\n");
    scanf("%d",&x);
    printf("Character at index %d is %c",x,c[x-1]);
    return 0;
}
