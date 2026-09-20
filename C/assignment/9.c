#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter a value of A:");
    scanf("%d",&a);
    
    printf("Enter a value of B:");
    scanf("%d",&b);
    
    a=a+b; b=a-b; a=a-b;
    
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}