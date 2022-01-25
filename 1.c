#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    printf("Input the string in lower-case -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    printf("\n%s",strupr(a));
    return 0;
}
