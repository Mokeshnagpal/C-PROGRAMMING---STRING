#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x=0,l=0,p=0,q=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    l=strlen(c);
    for(int i=0;i<l;i++)
    {
     if((int)c[i]>64&&(int)c[i]<91)
     {
         p++;
     }
     else if(((int)c[i])>96&&((int)c[i])<123)
            {
                q++;
            }
    }
    if(p!=l&&q!=l)
    {
        printf("Wrong input !!!");
        exit(0);

    }

    if((int)c[0]>64&&(int)c[0]<91)
    {
        for(int i=0;i<l;i++)
        {
            c[i]=(char)((int)(c[i])+32);
        }
    }
    else if((int)c[0]>96&&(int)c[0]<123)
    {
        for(int i=0;i<l;i++)
        {
            c[i]=(char)((int)(c[i])-32);
        }
    }
    printf("\n%s",c);
    return 0;
}
