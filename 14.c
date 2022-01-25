#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0,p=0,q=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    strcpy(c,strupr(c));
    for(int i=0;i<l;i++)
    {
        if(c[i]=='A'||c[i]=='O'||c[i]=='I'||c[i]=='E'||c[i]=='U')
            p++;
        else if(isalpha(c[i])!=0)
            q++;
    }
    printf("\nNumber of vowels -%d",p);
    printf("\nNumber of consonants -%d",q);
    return 0;
}
