#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int k=0,l=0;
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]!=' ')
            b[k++]=a[i];
    }
    printf("New string - %s",b);
    return 0;
}
