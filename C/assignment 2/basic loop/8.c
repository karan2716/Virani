#include <stdio.h>

int main()
{
    
    
    int n, remainder, reversed=0, orginal;
    
    printf("Enter a Number:");
    scanf("%d", &n);
    
    orginal=n;
    
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    printf("%d\n",reversed);
    
    if(orginal==reversed)
    {
        printf("This is a Palindrome Number");
    }
    
    else{
        printf("This is not Palindrme Number");
    }


    return 0;
}