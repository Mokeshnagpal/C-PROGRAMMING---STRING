#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int l=0,x=0,y=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    for(int i=0;i<l;i++)
    if(c[i]==' ')
        c[i]='\0';
        x=strlen(c);
        y=0;
    for(int i=0;i<l;i++)
    {
        if(c[i]=='\0')
        {
            if(strlen(&c[i+1])>x)
            {
                x=strlen(&c[i+1]);
                y=i+1;
            }
        }
    }
    printf("Largest word - %s\n",&c[y]);
    printf("Length - %d",x);
    return 0;
}
