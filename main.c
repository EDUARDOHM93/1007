#include <stdio.h>

int main (void) {

		double funcionario;
		double nrotrabalho;
		double salario;
	scanf("%lf %lf %lf",&funcionario, &nrotrabalho, &salario);
		double valor = nrotrabalho * salario;
		
	printf("NUMBER = %.0f\nSALARY = U$ %.2f\n",funcionario, valor);
	

return 0;

}
