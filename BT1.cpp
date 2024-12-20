#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];

    printf("Nhap mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    size_t do_dai = strlen(chuoi);
    if (chuoi[do_dai - 1] == '\n') {
        chuoi[do_dai - 1] = '\0';
        do_dai--;
    }

    printf("Chuoi vua nhap la: \"%s\"\n", chuoi);
    printf("Do dai cua chuoi la: %zu\n", do_dai);

    return 0;
}

