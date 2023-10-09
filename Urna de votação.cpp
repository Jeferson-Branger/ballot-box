#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Jeferson Branger */

	// variaveis globais
	int vJoao=0, vMaria=0, vZe=0, vVotoNulo=0, vInvalido=0;
	int pZureta=0, pGomes=0, pVotoNulo=0, pInvalido=0;

int main() {
	
	setlocale(LC_ALL, "Portuguese");	
	int opcao_menu, opcao_vereador, opcao_prefeito;

	
	printf("***BEM-VINDOS***\n");
	printf(" 1 - VOTAR \n");
	printf(" 2 - APURAÇÃO DOS VOTOS \n");
	printf(" 3 - SAIR \n");
	printf("---------------------------\n");
	printf("-->");
	scanf("%i", &opcao_menu);
	fflush(stdin);
	
	switch (opcao_menu)	{
	case 1:
		system("cls");
		printf("------VOTE EM UM VEREADOR------\n");
		printf("111 - Vereador João do Frete\n");
		printf("222 - Vereadora Maria da Pamonha\n");
		printf("333 - Vereador Zé da Farmácia\n");
		printf("444 - Voto Nulo\n");
		printf("-------------------------------\n");
		printf("--> ");
		scanf("%i", &opcao_vereador);
		fflush(stdin);
		
		switch (opcao_vereador)
		{
			case 111:
				vJoao = vJoao+1;
				printf("Confirmado seu voto para Vereador João do Frete, Obrigado\n");
				break;
			case 222:
				vMaria = vMaria+1;
				printf("Confirmado seu voto para Vereadora Maria da Pamonha, Obrigado\n");
				break;
			case 333:
			 	vZe = vZe+1;
				printf("Confirmado seu voto para Vereador Zé da Farmácia, Obrigado\n");
				break;
			case 444:
				vVotoNulo = vVotoNulo+1;
				printf("Confirmado seu voto nulo, Obrigado\n");
				break;
			default:
				vInvalido = vInvalido+1; 
				printf("Voto inválido, digite novamente\n");
				break;
		}
		printf("Pressione enter para continuar...\n");
		system("pause");
		
		system ("cls");
		printf("------VOTE EM UM PREFEITO------\n");
		printf("11 - Prefeito Dr. Zureta\n");
		printf("22 - Prefeito Senhor Gomes\n");
		printf("44 - Voto Nulo\n");
		printf("--------------------------------\n");
		printf("--> ");
		scanf("%i", &opcao_prefeito);
		fflush(stdin);
		
		switch (opcao_prefeito)
		{
			case 11:
				pZureta = pZureta+1;
				printf("Confirmado seu voto para Prefeito Dr. Zureta, Obrigado\n");
				break;
			case 22:
				pGomes = pGomes+1;
				printf("Confirmado seu voto para Prefeito Sr. Gomes, Obrigado\n");
				break;
			case 44:
				pVotoNulo = pVotoNulo+1;
				printf("Confirmado seu voto nulo, Obrigado\n");
				break;
			default:
				pInvalido = pInvalido+1;
				printf("Voto Inválido, digite novamente\n");
				break;
				
		}
		printf("Pressione R para retornar ao menu...\n");
		system("pause");
		system ("cls");
		main();
		break;
	
	case 2: 
		system ("cls");	
		printf("------APURAÇÃO DOS VOTOS------\n");
		printf("----------VEREADORES----------\n");
		printf("Vereador 111: %d votos.\n", vJoao);
		printf("Vereador 222: %d votos.\n", vMaria);
		printf("Vereador 333: %d votos.\n", vZe);
		printf("Voto Nulo 444: %d votos.\n", vVotoNulo);
		printf("Voto Inválido: %d votos.\n", vInvalido);
		printf("----------PREFEITOS----------\n");
		printf("Prefeito 11: %d votos.\n", pZureta);
		printf("Prefeito 22: %d votos.\n", pGomes);
		printf("Voto Nulo 44: %d votos.\n", pVotoNulo);
		printf("Voto Inválido: %d votos.\n", pInvalido);
		printf("--------------------------------\n");
		printf("Pressione R para retornar ao menu...\n");
		system("pause");
		system ("cls");
		main();
		break;
		
	case 3: 
		printf("Finalizando o Software...\n");
		break;
	default:
		printf("Erro, tente novamente...\n");
		system("pause");
		main();
		break;
	}
}
