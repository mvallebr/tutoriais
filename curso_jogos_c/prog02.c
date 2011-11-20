//prog02.c
#include <stdio.h>

int main () {
    int i;
    printf("Digite o valor de i:");
    scanf("%d", &i);
    if (i>50)
    	printf("O valor de i é maior que 50\n");
    else if (i>10)
        printf("O valor de i é menor que 50 mas é maior que 10\n");
    else
        printf("O valor de i é menor que 10!\n");

    #ifdef _STDIO_H_
    printf("O arquivo stdio.h foi incluido!\n");
    #endif

    switch(i) {
        case 1:
            printf("i vale 1\n");
            break;
        case 2:
	        printf("i vale 2\n");
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
	        printf("i tem um valor entre 10 e 14\n");
            break;
        default:
            printf("i NÃO vale nem 1, nem 2, nem nenhum valor entre 10 e 14\n");
            break;
    }

    return 0;
}