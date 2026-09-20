#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter Marks:");
    scanf("%d", &a);
    
    if (a <= 33){
    printf("Fail");
    }
    
    else if(a >= 0){
    	printf("Enter Valid Number");
	}
    
    else if(a <= 40){
        printf("C Grade");
    }
    
    else if(a <= 60){
        printf("B Grade");
    }
    
    else if(a <= 80){
        printf("A Grade");
    }
    
    else if(a <= 100){
        printf("A+");
    }
    
    else{
        printf("Enter Valid Marks");
    }
    return 0;
}
