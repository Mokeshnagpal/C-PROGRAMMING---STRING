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
        printf("%c is in upper-case\n",c);
    else if(islower(c))
        printf("%c is in lower-case\n",c);
    else if(isdigit(c))
        printf("%c is a digit\n",c);
    else
        printf("%c is a special character\n",c);
}


