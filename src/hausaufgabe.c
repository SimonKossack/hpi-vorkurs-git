#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* ptr;
    char ch;

    ptr = fopen("secret_data.txt", "r");

    if (NULL == ptr) {
        printf("Die Datei konnte nicht geöffnet werden.\n");
        return 1;
    }

    printf("Login mit Daten:\n");

    while (ch != EOF) {
        ch = fgetc(ptr);
        if (ch != EOF) {
            putchar(ch);
        }

    }

    fclose(ptr);
    return 0;
}