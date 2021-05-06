#include <stdio.h>

#define MAX 100

char fila[MAX];
int fim = 0;
int ini = 0;

/* Armazena um elemento. */
void armazenar(char e)
{
    if (fim == MAX) {
        printf("Lista cheia\n");
    } else {
        fila[fim] = e;
        fim++;
    }
}

/* Resgata um elemento. */
char resgatar(void)
{
    if (ini == fim) {
        printf("Lista vazia\n");
        return 0;
    } else {
        ini++;
        return fila[ini - 1];
    }
}

/* Visualiza a fila */
void visualizar(void)
{
    int i;
    printf("Fila: [ ");
    for (i = fim - 1; i >= ini; i--) {
        printf("%c ", fila[i]);
    }
    printf("]\n");
}

/* Programa principal */
int main(void)
{
    char s;
    armazenar('A');
    visualizar();
    armazenar('B');
    visualizar();
    armazenar('C');
    visualizar();
    s = resgatar();
    visualizar();
    armazenar('D');
    visualizar();
    s = resgatar();
    visualizar();
    s = resgatar();
    visualizar();
    s = resgatar();
    visualizar();
}