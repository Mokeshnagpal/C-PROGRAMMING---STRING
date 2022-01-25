#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int l=0,c=0;
    char a[30],b;
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
        b=a[i];
        for(int j=0;j<l;j++)
        {
            if(b==a[j]&&a[j]!='\0')
            {
                c++;
                a[j]='\0';
            }
        }
        if(b==' '&&c>1)
            printf("Number of blank spaces is %d\n",c);
        else if(c>1)
            printf("Number of %c is %d\n",b,c);
        c=0;
    }
    return 0;
}
