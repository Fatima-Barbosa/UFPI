#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//10. Fa�a um programa que resolva uma equa��o do primeiro grau (ax + b = 0).
	//Deve-se pedir para o usu�rio digitar os coeficientes a e b e, ap�s, calcular x, que � igual a -b/a.
	float x, a, b;
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	x = (a - b)/ a;
	printf("O valor de x eh: %.2f",x);
	
	return 0;
}
