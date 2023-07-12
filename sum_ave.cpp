#include <stdio.h>

int main() {
    char c;
    int count = 0;

    do {
        printf("Enter a character: ");
        scanf(" %c", &c); // Add a space before %c to consume any whitespace characters

        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
            (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            count++;
        }
    } while (c != '.');

    printf("Number of vowels: %d\n", count);
    return 0;
}

