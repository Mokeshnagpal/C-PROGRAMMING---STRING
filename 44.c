#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int l=0,k=0;
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input another string -\n");
    fflush(stdin);
    scanf("%[^\n]",b);
    fflush(stdin);
    l=strlen(a);
    k=strlen(b);
    l=(k>l)?k:l;
    for(int i=0;i<l;i++)
        {
            if((int)a[i]>(int)b[i])
            {
                printf("%d",(int)a[i]-(int)b[i]);
                exit(0);
            }
            else if((int)a[i]<(int)b[i])
            {
                printf("%d",(int)a[i]-(int)b[i]);
                exit(0);
            }
        }
    printf("0");
    return 0;
}
