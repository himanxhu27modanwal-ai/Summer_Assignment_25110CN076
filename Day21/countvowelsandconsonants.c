#include <stdio.h>
int main()
{
        char str[100];
    int i = 0, v = 0, c = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            v++;
        }
        else
        {
            c++;
        }

        i++;
    }
    printf("Vowels = %d\n", v);
    printf("Consonants = %d", c);
    return 0;
}