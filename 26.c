#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[60]="January 26 is celebrated as the Republic Day of India" ;
    n=strlen(c);
    for(int i=0;i<n;i++)
    if(c[i]==' ')
        c[i]='\0';
    if(strcmp(c,"January")==0)
        printf("August ");
    for(int i=0;i<n;i++)
    {
        if(c[i]=='\0')
        {
            if(strcmp((&c[i+1]),"26")==0)
                printf("15 ");
            else if(strcmp((&c[i+1]),"Republic")==0)
                printf("Independence ");
            else
                printf("%s ",&c[i+1]);
        }
    }
    return 0;
}
