#include <stdio.h>

int main(){

    //Criar a matriz

    char notas [2][2];
    notas[0][0] = 'i';
    notas[0][1] = 'r';
    notas[1][0] = 'b';
    notas[1][1] = 'm';

    printf("Primeiro valor da matriz: %c\n", notas[0][0]);
    printf("Primeiro valor da matriz: %c\n", notas[0][1]);
    printf("Primeiro valor da matriz: %c\n", notas[1][0]);
    printf("Primeiro valor da matriz: %c\n", notas[1][1]);

    return 0;
}