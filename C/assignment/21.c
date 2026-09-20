#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter a value of A:");
    scanf("%d", &a);
    
    printf("Enter a value of B:");
    scanf("%d", &b);
    
    printf("Press 1 for Addition \n");
    printf("Press 2 for Subtraction \n");
    printf("Press 3 for Multiplication \n");
    printf("Press 4 for Division \n");
    
    scanf("%d", &c);
    
    switch (c){
        case 1 :
        printf("%d", a+b);
        break;
        
        case 2 :
        printf("%d", a-b);
        break;
        
        case 3 :
        printf("%d", a*b);
        break;
        
        case 4 :
        printf("%d", a/b);
        break;
        
        default :
        printf("Enter valid number");
    }

    return 0;
}