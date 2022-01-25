#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    printf("Input the string in upper-case -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    printf("\n%s",strlwr(a));
    return 0;
}
