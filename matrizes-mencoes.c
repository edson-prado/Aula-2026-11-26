#include <stdio.h>

int main(){

char mencoes[2][2];

mencoes[0][0] = 'I';
mencoes[0][1] = 'R';
mencoes[1][0] = 'B';
mencoes[1][1] = 'M';

printf("Menções: %c\n", mencoes[0][0]);
printf("Menções: %c\n", mencoes[0][1]);
printf("Menções: %c\n", mencoes[1][0]);
printf("Menções: %c\n", mencoes[1][1]);

return 0;
}