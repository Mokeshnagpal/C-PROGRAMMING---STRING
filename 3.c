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
    for(int i=0;i<strlen(a);i++)
    {
        if(toupper(a[i])=='A'||toupper(a[i])=='E'||toupper(a[i])=='I'||toupper(a[i])=='O'||toupper(a[i])=='U')
            c++;
    }
    printf("\nNumber of vowels - %d",c);
    return 0;
}
