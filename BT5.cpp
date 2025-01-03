#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int dem = 0, i;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';

    for (i = 0; i < strlen(chuoi); i++) {
        if ((i == 0 || chuoi[i - 1] == ' ') && chuoi[i] != ' ') {
            dem++;
        }
    }

    printf("%d\n", dem);
    return 0;
}

