#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//8. Fa�a um programa que receba um n�mero e exiba seu sucessor e antecessor.
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Sucessor: %d\n",n+1);
	printf("Antecessor: %d\n",n-1);
	
	return 0;
}
