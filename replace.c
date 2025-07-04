#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = str[i] - 32;
        } else if (isupper(str[i])) {
            str[i] = str[i] + 32;
        }
    }
    printf("Modified string: %s", str);
    return 0;
}
