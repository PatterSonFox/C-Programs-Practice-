#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {  
            result[j++] = str[i];
        }
    }
    result[j] = '\0';  
    printf("String without spaces: %s", result);
    return 0;
}
