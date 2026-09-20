#include <stdio.h>

int main()
{

    int i=5, j;

    for(i; i>=1; i--){

        for(j=1; j<=i; j++){
            printf("J ");
        }

        printf("\n");
    }
    for(i=1; i<=5; i++)
    {
        

        for(j=1; j<=i; j++)
        {
            printf("K ");
        }
        printf("\n");
    }

}