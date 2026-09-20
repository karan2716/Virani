#include <stdio.h>

int main()
{
    int a , b;
    
    printf("Enter a number : ");
    scanf("%d",&a);
    
    b=a%2;

    printf("%d" , b);
    
    if (b==0)
    printf("This nuber is Even");
    
    else if (b==1)
    printf("This number is odd");

    return 0;
}