#include <stdio.h>
#include<conio.h>

void main()
{printf("Hello World\n");
int p,x;
x=10;//

p=x++;
printf("\nValue of P: %d",p);
printf("\nValue of X: %d",x);

p=++x;
printf("\nValue of P: %d",p);
printf("\nValue of X: %d",x);
}