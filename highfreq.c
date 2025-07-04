#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char maxChar;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (isalpha(ch))
        {
            freq[(unsigned char)ch]++;
            if (freq[(unsigned char)ch] > max)
            {
                max = freq[(unsigned char)ch];
                maxChar = ch;
            }
        }
    }
    printf("Highest frequency character: '%c' occured %d times \n", maxChar, max);
    return 0;
}