#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of %c = %d", ch, count);
    printf("\n");
    return 0;
}

