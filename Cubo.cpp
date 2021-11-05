/// Henrique Paulus, Cubo

#include <stdio.h>


/// função chamada soma - Start
void cubo(float a){   									///receber valores parametrizados
	
	float cubo;
	cubo = (a * a * a);   								/// processamento
	
	printf("O cubo de %2.f eh = %2.f", a, cubo);   		///saida - mostra para o usuário o valor do cubo.
	
	
}
///função chamada soma - End
int main()

{
	float valor;
	
	 printf("Digite o valor:\n");                        /// entrada do valor
	 
	  scanf("%f", &valor);								
	  
	    cubo(valor);
	
	
	
  return 0;
  
}
  
