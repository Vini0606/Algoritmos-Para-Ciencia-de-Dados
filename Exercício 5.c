#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaSequencial(int v, int vetor[10]){
	int i;
	for (i = 0; i<10; i++){
		if (vetor[i] == v) {
			return i;
		}
	}
	return 0;	
}

void insereValores(int i, int v, int*pont[10]) {
	
	int ind;
	
	// Conferir condi��es
	if (i > 10) {
		printf("indice escolhido maior que vetor...");
		return;
	} else if (*pont[10] != NULL) {
		printf("Vetor cheio...");
	}
	
	// Mover valores a direita
	for (ind = 10; ind>i; ind--){
		*pont[ind] = *pont[ind - 1]
	};
	
	// Inserir em local espec�ficado
	*pont[i] = v;
	
	
	return;
}

int main() {
    
	int i;
	int i_encontrado;
    int vetor[10];
	srand(time(NULL));
    
    for (i = 0; i < 10; i++) {
        vetor[i] = rand(); 
    }
    
    i_encontrado = buscaSequencial(10, vetor);
	
	if (i_encontrado) {
    	printf("�ndice do elemento: %d", i_encontrado);
	} else {
		printf("Elemento n�o est� presente");
	}
    
}

