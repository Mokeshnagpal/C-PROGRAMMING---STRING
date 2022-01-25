#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0;
char a[]=" The quick brown fox \n jumps over the \n lazy dog. \n";
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(isprint(a[i])==0)
        {
            a[i]='\0';
            printf("New string - %s",a);
            exit(0);
        }
    }
    return 0;
}
