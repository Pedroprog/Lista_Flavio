#include<stdio.h>
#include<math.h>
int main(){ 
int a,b,c,x1,x2,delta;
printf(" digite o valor de a:");
scanf("%d",&a);
printf(" digite o valor de b:");
scanf("%d",&b);
printf(" digite o valor de c:");
scanf("%d",&c);
if(a==0){
	printf("nao tem raiz");
}
else{
	delta=(b*b)-(4*a*c);
	if(delta<0){
		printf("nao tem raizes reais");
	}
	else{
	  
		x1=(-b)+sqrt(delta)/2*a;
		x2=(-b)-sqrt(delta)/2*a;
		printf("X1 : %d\nX2 : %d",x1,x2);
	}
}
return(0);

}
