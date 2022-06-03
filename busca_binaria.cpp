#include <stdio.h>
#define N 10

int busca_binaria(int vet[], int x){
	
	int p = 0, r = N-1, q;
	
	while(p <= r){
		
		q = ((p + r) / 2); // Iguale q a [(p + r) / 2)
		
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
	
	
//	scanf("%d", &x);
	
	int vet[N], busca, valor = 7;
	printf("Valor a ser buscado: %d", valor);
	preencher(vet);
	//imprimir(vet);
	
	busca = busca_binaria(vet, valor);
	
	printf("\nA posicao eh: %d", busca);
	
	
	return 0;
}















