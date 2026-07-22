#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int pos, i, len;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the position: ");
    scanf("%d", &pos);

    printf("Enter the character to stuff: ");
    scanf(" %c", &ch);

    len = strlen(str);

    // Shift characters to the right
    for (i = len; i >= pos - 1; i--) {
        str[i + 1] = str[i];
    }

    // Insert the character
    str[pos - 1] = ch;

    printf("String after stuffing: %s\n", str);

    return 0;
}
