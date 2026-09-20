#include <stdio.h>

int main()
{
   float p=3.14, r;
   
   printf("Enter a number:");
   scanf("%f",&p);
   
   printf("Enter Radius:");
   scanf("%f",&r);
   
   printf("%f",p*r*r);

    return 0;
}