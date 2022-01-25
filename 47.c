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
    strupr(a);
    printf("The characters that are repeated are -\n");
    for(int i=65;i<90;i++)
    {
        for(int j=0;j<l;j++)
        {
            if((int)a[j]==i)
                c++;
        }
        if(c>1)
            printf("%c\t",i);
        c=0;
    }
    return 0;
}
