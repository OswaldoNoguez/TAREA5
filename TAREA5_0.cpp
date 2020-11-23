#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int cont, acum=0;
	for (cont=10;cont>=1;cont--){
		acum=cont+acum;
	}
	printf("La suma de los números del 10 al 1 es igual a: %d", acum);
	return 0;
}
