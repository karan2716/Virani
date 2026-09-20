#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter Your Age:");
    
    scanf("%d", &age);
    
    if (age>=18 && age<=80){
    printf("You are eligble for vote");
    }
    
    else if (age<=0){
    printf("Plz enter valid number");    
    }
    
    else if (age>=80){
    printf("Sorry You Are too old Try with next Birth");    
    }
    
    else {
    printf("You are not eligble for vote");
    }

    return 0;
}