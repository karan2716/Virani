#include <stdio.h>

int main()
{
    char charc;
    
    printf("Enter a word:");
    scanf("%c", &charc);
    
    
    if (charc=='a' || charc=='e' || charc=='i' || charc=='o' || charc=='u' || charc=='A' || charc=='E' || charc=='I' || charc=='O' || charc=='U')
    printf("vowel");
    
    else
    printf("Consonant:");
    

    return 0;
}