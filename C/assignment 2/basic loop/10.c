#include <stdio.h>

int main()
{
    

    int n1, n2;
    
    printf("From Start:");
    scanf("%d", &n1);
    
    printf("End:");
    scanf("%d", &n2);
    
    printf("Even Number\n");
    
    for(int i=n1; i<=n2; i++)
    {
        int j;
        j=i%2;
        if(j==0)
        {
            printf("%d\n",i);
        }
    }
    
    printf("Odd Number\n");
    for(int i=n1; i<=n2; i++)
    {
        int j;
        j=i%2;
        if(j!=0)
        {
            printf("%d\n",i);
        }
    }
    
    
    

    return 0;
}