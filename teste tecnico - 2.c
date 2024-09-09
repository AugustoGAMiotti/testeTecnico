#include <stdio.h>
#include <ctype.h>

int qtdDeA(const char *str) {
    int cont = 0;
    while (*str) {
        if (tolower(*str) == 'a') {
            cont++;
        }
        str++;
    }
    return cont;
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int count = qtdDeA(str);

    if (count > 0) {
        printf("A letra a aparece %d vez(es).\n", count);
    } else {
        printf("A letra a não aparece na palavra.\n");
    }

    return 0;
}
