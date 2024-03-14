#include <stdio.h>

int main() {
	
	int valor = 0;
	int valor2 = 0;
	
	printf("\n Digite um valor inteiro: ");
	scanf("%d", &valor);
	printf("\n Digite outro valor inteiro: ");
	scanf("%d", &valor2);
	
	if (valor2 > valor) {
		for (int i = valor; i <= valor2; i++){
			printf("\n %d", i);
		}
	} else if ( valor2 < valor) {
		for (int i = valor2; i <= valor; i++){
			printf("\n %d", i);
		}
	}
	
	return 0;
}
