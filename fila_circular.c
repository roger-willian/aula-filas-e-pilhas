#include <stdio.h>

#define MAX 100

char fila[MAX];
int fim = 0;
int ini = 0;

/* Armazena um elemento. */
void armazenar(char e)
{
    if (fim + 1 == ini || (fim + 1 == MAX && !ini)) {
        printf("Lista cheia\n");
    } else {
        fila[fim] = e;
        fim++;
        if (fim == MAX) fim = 0; /* reinicia */
    }
}

/* Resgata um elemento. */
char resgatar(void)
{
    if (ini == MAX) ini = 0; /* reinicia */
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
    armazenar('1');
    visualizar();
    armazenar('2');
    visualizar();
    armazenar('3');
    visualizar();
    armazenar('4');
    visualizar();
    armazenar('5');
    visualizar();
    s = resgatar();
    visualizar();
    s = resgatar();
    visualizar();
    armazenar('6');
    visualizar();
    armazenar('7');
    visualizar();
}