#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int l=0;
    char a[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    l=strlen(a);
    for(int i=0;i<l;i++)
        if((int)a[i]>96&&(int)a[i]<123)
    a[i]=(char)((int)a[i]-32);
    printf("New string after conversion - %s",a);
    return 0;
}
