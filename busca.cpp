#include <stdio.h>

#define N 99999

int busca_linear(int vet[], int valor){
	
	for(int i = 0; i < N; i++){
		
		if(vet[i] == valor){
			
			return i;
		}
	}
	
	return -1;
	
}

int main(){
	
	int busca;
	
	int vet[N], valor = 500000;
	
	for(int i = 0; i < N; i++){
		
		vet[i] = i;
	}
	
	/*for(int i = 0; i < N; i++){
		
		printf(" %d ", vet[i]);
	}
	*/
	
	printf("\nInforme o valor a ser buscado: %d", valor);
	//scanf("%d", &valor);
	
	busca = busca_linear(vet, valor);
	
	printf("\nO valor indice do valor eh: %d", busca);
	
	return 0;
}




