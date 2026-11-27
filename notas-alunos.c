#include <stdio.h>

int main(){

 float notas1B[2][2];
 float notas2B[2][2];
 float soma[2][2];
 float media[2][2];

notas1B[0][0] = 8.5;
notas1B[0][1] = 7.0;
notas1B[1][0] = 6.8;
notas1B[1][1] = 5.9;

notas2B[0][0] = 7.6;
notas2B[0][1] = 6.4;
notas2B[1][0] = 5.1;
notas2B[1][1] = 8.5;

float soma1 = notas1B[0][0] + notas2B[0][0];
float soma2 = notas1B[0][1] + notas2B[0][1];
float soma3 = notas1B[1][0] + notas2B[1][0];
float soma4 = notas1B[1][1] + notas2B[1][1];

float media1 = soma1/2.0;
float media2 = soma2/2.0;
float media3 = soma3/2.0;
float media4 = soma4/2.0;

printf("---Notas do 1° Bimestre---\n");
printf("Nota 1: %.2f\n", notas1B[0][0]);
printf("-----------------\n");
printf("Nota 2: %.2f\n", notas1B[0][1]);
printf("-----------------\n");
printf("Nota 3: %.2f\n", notas1B[1][0]);
printf("-----------------\n");
printf("Nota 4: %.2f\n", notas1B[1][1]);

printf("---Notas do 2° Bimestre---\n");
printf("Nota 1: %.2f\n", notas1B[0][0]);
printf("-----------------\n");
printf("Nota 2: %.2f\n", notas1B[0][1]);
printf("-----------------\n");
printf("Nota 3: %.2f\n", notas1B[1][0]);
printf("-----------------\n");
printf("Nota 4: %.2f\n", notas1B[1][1]);

printf("---Soma das notas---\n");
printf("Soma das notas 1B e 2B: %.2f\n", soma1);
printf("Soma das notas 1B e 2B: %.2f\n", soma2);
printf("Soma das notas 1B e 2B: %.2f\n", soma3);
printf("Soma das notas 1B e 2B: %.2f\n", soma4);

printf("---Média das notas---\n");
printf("Soma das notas 1B e 2B: %.2f\n", media1);
printf("Soma das notas 1B e 2B: %.2f\n", media2);
printf("Soma das notas 1B e 2B: %.2f\n", media3);
printf("Soma das notas 1B e 2B: %.2f\n", media4);

return 0;
}