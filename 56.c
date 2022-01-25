#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void removeString(char *,int,int);
int main()
{
    int i=0,l=0;
    char a[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input the index of the string from where you want to remove -\n");
    scanf("%d",&i);
    printf("Input the number of characters you want to remove -\n");
    scanf("%d",&l);
    removeString(a,i,l);
    return 0;
}
void removeString(char *a,int i,int l)
{
    a[i]='\0';
    printf("New string - %s%s",a,&a[i+l]);
}
