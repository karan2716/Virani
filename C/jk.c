#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age:");
    scanf("%d", &age);

    if(age==17){
        printf("Karan\n");
    }

    else if(age==22){
        printf("Jaimin\n");
    }

    else if(age==45){
        printf("Mom\n");
    }

    else if(age==49){
        printf("Dedy\n");
    }

    else if(age==73){
        printf("Ba\n");
    }

    else if(age==76){
        printf("Dada\n");
    }

    else{
        printf("You are not from our house. Go to Your house your mom-dad are waiting for you....\n");
    }


}

