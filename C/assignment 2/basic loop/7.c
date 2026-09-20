#include <stdio.h>

int main()
{
    
    
    int n, t1=0, t2=1, nextterm, i;
    
    printf("Enter Terms:");
    scanf("%d", &n);
    
    for(i=1; i<=n; ++i)
    {
        printf("%d",t1);
        
        if(i<n)
        {
            printf(" ");
        }
        
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    
    printf("\n");

    return 0;
}