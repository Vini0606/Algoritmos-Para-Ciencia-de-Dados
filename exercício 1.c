#include <stdio.h>

int main() {
	
	int vetor[5];
	int i;
	
	for (i = 0; i<5; i++) {
		printf("\n Digite o valor %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	return 0;
}
