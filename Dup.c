#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int i, j, k;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; ) {
            if (str[i] == str[j]) {
                // Shift characters left
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--; // reduce length
            } else {
                j++;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
