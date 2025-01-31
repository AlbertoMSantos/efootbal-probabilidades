/******************************************************************************

                           GDB Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int qtd_giros, qtd_total, qtd_desejados;
	printf("digite a qtd total de jogadores da box: ");
	scanf("%d", &qtd_total);
	printf("digite a qtd de jogadores desejados: ");
	scanf("%d", &qtd_desejados);
	printf("digite a qtd de giros disponiveis: ");
	scanf("%d", &qtd_giros);

	int numerador, denominador;
	double resposta = 1;
	for(int i = 0; i < qtd_desejados; i++) {
		numerador = (qtd_total - i - qtd_giros);
		denominador = (qtd_total - i);
		resposta *= (double)numerador/denominador;
// 		printf("%d*", denominador);
	}
// 	printf("1\n");
	printf("chance de tirar ao menos 1, com %d giros: %.2f%c", qtd_giros, (1 - resposta)*100, 37);

	return 0;
}