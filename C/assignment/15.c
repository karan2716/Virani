#include <stdio.h>

int main()
{
    int a , b;
    
    printf("Enter a Year : ");
    scanf("%d",&a);
    
    b=a%4;
    
    printf("%d" , b);
    
    if (b==0)
    printf("This year is leep");
    
    else
    printf("This year is normal");
    

    return 0;
}