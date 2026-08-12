#include <stdio.h>
#include <string.h>

int main() {
    char stuffed[100], destuffed[100];
    int i, j = 0;

    printf("Enter stuffed string: ");
    scanf("%s", stuffed);

    for (i = 0; stuffed[i] != '\0'; i++) {
        if (stuffed[i] == '#') {
            // Skip the stuffing character
            i++;
        }
        destuffed[j++] = stuffed[i];
    }

    destuffed[j] = '\0';

    printf("Destuffed string: %s\n", destuffed);

    return 0;
}
