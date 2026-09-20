#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter A value of A:");
    scanf("%d",&a);
    
    printf("Enter A value of B:");
    scanf("%d",&b);
    
    int max=(a>b) ? a : b;
    printf("%d",max);

    return 0;
}