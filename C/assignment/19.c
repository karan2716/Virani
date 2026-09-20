#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    printf("Enter A first number A:");
    scanf("%d",&a);
    
    printf("Enter A second number B:");
    scanf("%d",&b);
    
    printf("Enter A third number C:");
    scanf("%d",&c);
    
    printf("Enter A third number D:");
    scanf("%d",&d);
    
    if (a>b&&c&&d){
    printf("A is largest");
    }
    
    else if (b>a&&c&&d){
    printf("B is largest");
    }
    
    else if (c>a&&b&&d){
    printf("C is largest");
    }
    
    else if (d>a&&c&&b){
    printf("B is largest");
    }
    
    else
    printf("Enter valid number");

    return 0;
}