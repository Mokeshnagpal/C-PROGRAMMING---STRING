#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    int s=0,d=0;
    char a,b;
    printf("Input a character -\n");
    fflush(stdin);
    scanf("%c",&a);
    fflush(stdin);
    if(((int)a<90&&(int)a>64)||((int)a<122&&(int)a>96))
        printf("Next character that follows %c is %c",a,a+1);
    else if((int)a==90)
        printf("Next character that follows %c is %c",a,65);
    else if((int)a==122)
        printf("Next character that follows %c is %c",a,97);
    else
        printf("Wrong input !!!");
    return 0;
}
