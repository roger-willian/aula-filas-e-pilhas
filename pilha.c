#include <stdio.h>

#define MAX 100

char pilha[MAX];
int topo = 0;

/* Armazena um elemento. */
void push(char e)
{
    if (topo == MAX) {
        printf("Pilha cheia\n");
    } else {
        pilha[topo] = e;
        topo++;
    }
}

/* Resgata um elemento. */
char pop(void)
{
    if (topo == 0) {
        printf("Pilha vazia\n");
        return 0;
    } else {
        topo--;
        return pilha[topo];
    }
}

/* Visualiza a fila */
void visualizar(void)
{
    int i;
    printf("Pilha: [ ");
    for (i = topo - 1; i >= 0; i--) {
        printf("%c ", pilha[i]);
    }
    printf("]\n");
}

/* Programa principal */
int main(void)
{
    char s;
    push('A');
    visualizar();
    push('B');
    visualizar();
    push('C');
    visualizar();
    s = pop();
    visualizar();
    push('D');
    visualizar();
    s = pop();
    visualizar();
    s = pop();
    visualizar();
    s = pop();
    visualizar();
}