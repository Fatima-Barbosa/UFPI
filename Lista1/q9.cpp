#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//9. Fa�a um programa que calcule a quantidade de dinheiro gasta por um fumante dados: a quantidade de anos que ele fuma,
	// o pre�o da carteira e o n�mero de cigarros por dia.
	int anos, qtd;
	float pc;
	
	printf("Digite a quantidade de anos que vc fuma: ");
	scanf("%d",&anos);
	printf("Digite a quantidade de cigarros fumados por dia: ");
	scanf("%d",&qtd);
	printf("Digite o preco da carteira de cigarros: ");
	scanf("%f",&pc);
	float d;
	d = qtd * (anos*365);
	d = (d/20)*pc;
	printf("vc gastou: %.f",d);
	
	
	return 0;
}
