#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//3.	Fa�a um programa que leia um n�mero nome e escreva a mensagem "O n�mero digitado foi" seguido do n�mero recebido:
	// Ex: entrada: 10; sa�da: O n�mero digitado foi 10.
	int n;
	printf("Digite um numero: ");
	
	scanf("%d",&n);
	
	printf("O numero digitado foi: %d",n);
	
	return 0;
}
