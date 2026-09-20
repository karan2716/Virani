#include <stdio.h>

int main()
{

    int i=1;

    for(i; i<=5; i++)
    {
        if(i==4)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}

