#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    printf("New string -\n");
    printf("%c.",toupper(c[0]));
    for(int i=0;i<n;i++)
    {
        if(c[i]==' ')
        {
            x=0;
            for(int j=i+1;j<n;j++)
            {
                if(c[j]==' ')
                    x=1;
            }
            if(x==1)
                printf("%c.",toupper(c[i+1]));
            else
            {
                c[i+1]=toupper(c[i+1]);
                printf("%s",&c[i+1]);
            }
        }
    }
    return 0;

}
