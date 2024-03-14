#include <stdio.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro){
	*area = (3*l^2*sqrt(3))/2;
	*perimetro = 6*l;
}

int main() {
	
	float l;
	float area;
	float perimetro;
	
	printf("Digite o lado: ");
	scanf("%f", &l);
	
	printf("area: %f\n perimetro:%f", area, perimetro);
	
	return 0;
}

