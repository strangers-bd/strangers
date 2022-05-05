// check alphabet or not

#include <stdio.h>
int main(void)
{
    char cData;
    
    printf("Enter any character: ");
    scanf("%c", &cData);
    
    if((cData >= 'a' && cData <= 'z') || (cData >= 'A' && cData <= 'Z'))
    {
        printf("It is an alphabet.\n\n");
    }
    else
    {
        printf("It is not an alphabet.\n\n");
    }
    return 0;
}
