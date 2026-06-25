#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    char longest[50], word[50];
    int i, j = 0, maxLen = 0, len;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; ; i++)
    {        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            word[j] = '\0';
            len = strlen(word);
            if(len > maxLen)
            {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0;
            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
        else
        {
            word[j] = str[i];
            j++;
        }
    }
    printf("Longest word = %s", longest);
    return 0;
}