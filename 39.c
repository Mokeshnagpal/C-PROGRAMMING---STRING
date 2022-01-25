#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,x=0;
    char c[60]="My name is Alok Kumar Gupta and my age is 45 years" ;
    n=strlen(c);
    for(int i=0;i<n;i++)
    if(c[i]==' ')
        c[i]='\0';
        printf("%s ",c);
    for(int i=0;i<n;i++)
    {
        if(c[i]=='\0')
        {
            if(strcmp((&c[i+1]),"45")==0)
                printf("35 ");
            else if(strcmp((&c[i+1]),"Alok")==0)
                printf("Ashok ");
            else
                printf("%s ",&c[i+1]);
        }
    }
    return 0;
}
