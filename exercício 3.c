#include <stdio.h>

void preencher(int (*pont)[10][10]){
	
	int i;
	int j;
	int num = 0;
	
	for (i = 0; i<10; i++) {
		for (j = 0; j<10; j++){
			(*pont)[i][j] = num;
			num += 1;
		}
	}
	
}

int main() {
	
	int matriz[10][10];
	int (*pont)[10][10] = &matriz;
	int j;
	int i;
	
	preencher(pont);
	
	for (i = 0; i<10; i++) {
		for (j = 0; j<10; j++){
			printf("%d", matriz[i][j]);
		}
	}
		
	return 0;
}
