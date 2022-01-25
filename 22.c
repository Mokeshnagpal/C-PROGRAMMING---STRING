#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n=0,u=0,l=0,d=0,s=0;
    char c[20];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    n=strlen(c);
    for(int i=0;i<n;i++)
    {
        if((int)c[i]>96&&(int)c[i]<122)
            l++;
        else if((int)c[i]>64&&(int)c[i]<91)
            u++;
        else if((int)c[i]>47&&(int)c[i]<58)
            d++;
        else
            s++;
    }
    printf("Number of upper-case characters - %d\n",u);
    printf("Number of lower-case characters - %d\n",l);
    printf("Number of digits - %d\n",d);
    printf("Number of special characters - %d\n",s);
    return 0;
}
