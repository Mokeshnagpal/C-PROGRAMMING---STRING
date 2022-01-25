#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
 char c;
    printf("Input a character -\n");
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
    if(isupper(c))
    {
        printf("CHARACTER AFTER CHANGING CASE -%c\nASCII VALUE - %d",tolower(c),tolower(c));
    }
    else if(islower(c))
    {
        printf("CHARACTER AFTER CHANGING CASE -%c\nASCII VALUE - %d",toupper(c),toupper(c));
    }
    return 0;
}
