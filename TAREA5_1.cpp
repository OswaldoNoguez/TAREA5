#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int cont, num,x,s;
	unsigned long  acum;
	do{
		printf("Por favor, elija un número entre el 2 y el 20 para visualizar su factorial\n");
		scanf("%d",&num);
	}
	while (num>20 or num<2);
	cont=num-1;
	acum=num*cont;
	while (cont>1){
		cont--;
		acum=acum*cont;
	}  
	printf ("El valor de %d! es igual a: ",num);
	for (x=num-1;x>=1;x--){
	printf("%d*",num);
		for (s=num-1;s>1;s--){
			if (s==x){
				break;
			}
			else 
			printf("%d*",s);	
		}
	printf("%d!=",x);
	if (x==1){
	printf("%ld",acum);
	}
	}
	return 0;
}
