#include <stdio.h>
#include <ctype.h>
void convertVowelsToUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check for lowercase vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u') {
            str[i] = toupper(str[i]);
        }
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertVowelsToUppercase(str);

    printf("Converted string: %s", str);

    return 0;
}
