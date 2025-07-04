#include <stdio.h>
void convertVowelsToUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') str[i] = 'A';
        else if (str[i] == 'e') str[i] = 'E';
        else if (str[i] == 'i') str[i] = 'I';
        else if (str[i] == 'o') str[i] = 'O';
        else if (str[i] == 'u') str[i] = 'U';
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
