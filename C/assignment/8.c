/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a, b, c;
    
    printf("Enter a value of A:");
    scanf("%d", &a);
    
    printf("Enter a value of B:");
    scanf("%d", &b);
    
    c=a, a=b, b=c;
    
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}