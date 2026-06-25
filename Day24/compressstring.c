#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, a;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        a = 1;
        while(str[i] == str[i + 1])
        {
            a++;
            i++;
        }
        printf("%c%d", str[i], a);
    }
    return 0;
}