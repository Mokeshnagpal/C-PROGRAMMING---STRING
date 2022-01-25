#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,j=0;
    char c[30],x;
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    printf("Input a character to be searched -\n");
    fflush(stdin);
    scanf("%c",&x);
    fflush(stdin);
    n=strlen(c);
    strupr(c);
    for(int i=0;i<n;i++)
    {
        if(c[i]==toupper(x))
            j++;
    }
    printf("Frequency of %c is %d",x,j);
    return 0;
}
