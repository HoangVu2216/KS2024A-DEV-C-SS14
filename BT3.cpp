#include <stdio.h>

#define MAX 100

int main() {
    char str[MAX];
    int len;

    printf("Nhap chuoi bat ky: ");
    fgets(str, MAX, stdin);

    for (len = 0; str[len] != '\0'; len++) {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
    }

    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

