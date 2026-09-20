#include <stdio.h>

int main()
{
   
   int n, rem, sum=0;
   
   printf("Enter Number:");
   scanf("%d", &n);
   
   for(n; n!=0;)
   {
       rem=n%10;
       sum=sum+rem;
       n=n/10;
       
   }
   printf("%d\n", sum);

    return 0;
}