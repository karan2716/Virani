#include <stdio.h>

int main()
{
    
    char ab;
    
    printf("Enter Value:");
    scanf("%c", &ab);
    
   if (ab >= '0' && ab < '9'){
        printf("Digit");
   }
        
        else if (ab >= 'a' && ab <= 'z'){
            printf("Alphabet");
        }
        
        else if (ab >= 'A' && ab <= 'Z'){
            printf("Alphabet");    
        }
        
        else{
            printf("Special symbol");
        }
        
            
    return 0;
}