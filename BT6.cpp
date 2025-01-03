#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char chuoi[100] = "Hello World 123!";
    int dem = 0, i;

    printf("Chuoi hien tai: %s\n", chuoi);

    for (i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {
            dem++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", dem);

    return 0;
}

