#include <stdio.h>
int main()
{
    char str[100];
    int i, j, c;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        c = 0;
        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                c++;
            }
        }
        if(c == 1)
        {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found");
    return 0;
}