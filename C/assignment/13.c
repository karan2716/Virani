#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter A first number A:");
    scanf("%d",&a);
    
    printf("Enter A second number B:");
    scanf("%d",&b);
    
    printf("Enter A third number C:");
    scanf("%d",&c);
    
    if (a>b&&c){
    printf("A is largest");
    }
    
    else if (b>a&&c){
    printf("B is largest");
    }
    
    else if (c>a&&b){
    printf("C is largest");
    }
    
    else
    printf("Enter valid number");

    return 0;
}