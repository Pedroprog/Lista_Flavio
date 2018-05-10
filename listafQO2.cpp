#include<stdio.h>
//programa para classificação de triângulo;
int main (){
	int a,b,c, reiniciar;
	start:
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	printf("Digite o valor de c:");
	scanf("%d",&c);
	if (a==b && b==c){
		printf("Triangulo equilatero\n\n");
	} else if ((a==b && b!=c) || (a!=b && b==c) || (a==c && c!=b)){
		printf("Triangulo isoceles\n\n");
	} else { 
		printf("Triangulo escaleno\n\n");
	}
	printf("Reiniciar? [Y: 1/N: 0]\n");
	scanf("%d", &reiniciar);
	fflush(stdin);
	if (reiniciar==1){
		goto start;
	}
	return (0);
}
