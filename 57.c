#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void removeString(char *,int,char *);
int main()
{
    int i=0,l=0;
    char x[30],a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input the index of the string from where you want to add -\n");
    scanf("%d",&i);
    printf("Input the string you want to add -\n");
    fflush(stdin);
    scanf("%[^\n]",b);
    fflush(stdin);
    removeString(a,i,b);
    return 0;
}
void removeString(char *a,int i,char *b)
{
    char x[20];
    for(int j=0;j<i;j++)
        x[j]=a[j];
    printf("New string - %s%s%s",x,b,&a[i]);
}

