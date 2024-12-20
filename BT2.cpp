#include <stdio.h>

int main() {
    char chuoi[] = "Lap trinh C";

    printf("Chuoi duoc in tung ky tu:\n");
    for (int i = 0; chuoi[i] != '\0'; i++) {
        printf("%c ", chuoi[i]);
    }
    printf("\n");

    return 0;
}

