#include <stdio.h>
int main()
{
    char str[100],temp;
    int i = 0, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    for(i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed string = %s", str);
    return 0;
}