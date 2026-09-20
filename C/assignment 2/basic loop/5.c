#include <stdio.h>

int main()
{
   
   int n, rem, rev=0;
   
   printf("Enter Number:");
   scanf("%d", &n);
   
   for(n; n!=0;)
   {
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
   }
   printf("%d", rev);

    return 0;
}