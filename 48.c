#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int l=0,c=0;
    char a[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]==' ')
            a[i]='\0';
    }
    printf("New string -\n%s\n",a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='\0')
            printf("%s\n",&a[i+1]);
    }
    return 0;
}
