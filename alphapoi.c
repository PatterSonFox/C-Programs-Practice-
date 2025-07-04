#include <stdio.h>
int main() {
    char alphabet[26];
    char *ptr = alphabet;

    for (int i = 0; i < 26; i++) {
        *(ptr + i) = 'A' + i;
    }

    printf("English Alphabet:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }

    return 0;
}
