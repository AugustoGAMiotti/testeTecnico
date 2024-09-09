#include <stdio.h>
#include <stdlib.h>

int ehFibonacci(int n) {

    int quadradoPerfeito(int x) {
        if (x < 0) return 0;
        int raiz = (int)sqrt(x);
        return (raiz * raiz == x);
    }

    int verificar = 5 * n * n;
    return quadradoPerfeito(verificar + 4) || quadradoPerfeito(verificar - 4);
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ehFibonacci(numero)) {
        printf("%d é Fibonacci.\n", num);
    } else {
        printf("%d não é Fibonacci.\n", num);
    }

    return 0;
}
