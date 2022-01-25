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
    printf("Input another character -\n");
    fflush(stdin);
    scanf("%c",&b);
    fflush(stdin);
    s=(int)a+(int)b;
    d=(int)a-(int)b;
    printf("Sum of the ASCII value of %c and %c is %d\n",a,b,s);
    printf("Difference between the ASCII value of %c and %c is %d\n",a,b,abs(d));
    return 0;
}
