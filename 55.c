#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void findString(char *,char *);
int main()
{
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input the string to be searched -\n");
    fflush(stdin);
    scanf("%[^\n]",b);
    fflush(stdin);
    findString(a,b);
    return 0;
}
void findString(char *a,char *b)
{
    int i=0,z=0,y=0;
    int l=strlen(a);
    int x=strlen(b);
    for(int i=0;i<l;i++)
    {
        if(strncmp(&a[i],b,x)==0)
        {
            printf("String found at %d",i);
            exit(0);
        }
    }
    printf("String not found");
}
