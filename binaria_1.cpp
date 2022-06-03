#include <stdio.h>
#define N 100000

int busca_binaria(int vet[], int x){
	
	int p = 0, r = N-1, q;
	
	while(p <= r){
		
		q = ((p + r) / 2); 
		printf("|");
		if(vet[q] == x){
			
			return q;
			
		}else if(x < vet[q]){
			
				r = q - 1;
				
		}else if(vet[q] < x){
						
				p = q + 1;
				
	 	}
			
	}
	
	return -1;
			
	
}

void preencher(int vet[]){
	
	int i;
	
	for(i = 0; i < N; i++){
		
		vet[i] = i;
	}
	
}

void imprimir(int vet[]){
	
	int i;
	
	for(i = 0; i < N; i++){
		
		printf(" %d ", vet[i]);
	}
	
	printf("\n");
	
	
}

int main(){
	
	int x;
	
	int vet[N], busca; 
	
	int valor1 = 0, valor2 = ((N-1) / 2), valor3 = (N -1) ;
	
//	printf("O valor a ser buscade eh: %d", valor1);

//	printf("O valor a ser buscade eh: %d", valor2);
	
	printf("O valor a ser buscade eh: %d", valor3);
	
	preencher(vet);

//	busca = busca_binaria(vet, valor1);

//	busca = busca_binaria(vet, valor2);
	
	busca = busca_binaria(vet, valor3);
	
	printf("\nA posicao eh: %d", busca);
	
	
	return 0;
}
















