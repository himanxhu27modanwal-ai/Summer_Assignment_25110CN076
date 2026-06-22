#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while(str[i] != '\0')
    {
        i++;
    }
    printf("Length of string = %d", i - 1);
    return 0;
}