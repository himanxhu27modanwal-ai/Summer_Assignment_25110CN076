#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i, j, l1, l2;
    char t;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    l1 = strlen(str1);
    l2 = strlen(str2);
    if(l1 != l2)
    {
        printf("Not Anagram");
        return 0;
    }
    for(i = 0; i < l1 - 1; i++)
    {
        for(j = i + 1; j < l1; j++)
        {
            if(str1[i] > str1[j])
            {
                t = str1[i];
                str1[i] = str1[j];
                str1[j] = t;
            }
            if(str2[i] > str2[j])
            {
                t = str2[i];
                str2[i] = str2[j];
                str2[j] = t;
            }
        }
    }
    for(i = 0; i < l1; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram Strings");
    return 0;
}