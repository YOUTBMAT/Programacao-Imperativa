//
// Created by YOUTBMAT on 06/08/2026.
//
#include <stdio.h>

int main() {
    char c1, c2, c3;
    int N1, N2;
    float Q;

    printf("Digite 3 numeros, precione ENTER depois de cada um:\n");
    scanf(" %c", &c1);
    scanf(" %c", &c2);
    scanf(" %c", &c3);

    N1 = (c1 - '0') * 100 + (c2 - '0') * 10 + (c3 - '0');

    printf("Digite 3 numeros, precione ENTER depois de cada um:\n");
    scanf(" %c", &c1);
    scanf(" %c", &c2);
    scanf(" %c", &c3);

    N2 = (c1 - '0') * 100 + (c2 - '0') * 10 + (c3 - '0');

    Q = (float) N1/N2;
    printf("Valor da divisao é %8.3f", Q);

    return 0;
}