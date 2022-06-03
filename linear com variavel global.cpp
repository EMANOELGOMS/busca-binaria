#include <stdio.h>

// funçao que faz a busca pelo valor digigitado pelo o usuario

int busca_linear(int vet[],int tam, int v){
	
	
	for(int i = 0; i < tam; i++){
		
		if(vet[i]==v){// caso o valor busca seja igual ao valor do vetor na posicao i.
			
			return i; //
		}
	}
	
	return -1;	//caso o numero nao seja encontrado irá retornar -1 (not-foud)
}


int main(){
	
	
	int tam;	
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tam); // declarar o tamanho do vetor 
	
	int i, vet[tam];
	
	
	for(i=0;i<tam;i++){			
		printf("Digite o valor da posicao %d: ",i);		
		scanf("%d",&vet[i]);	// Ler os indeces do vetor	
				
	}
	
	
	int v, busca;
	printf("\nDigite o valor a ser buscado: ");
	scanf("%d", &v); // busca o numero desejado
	
	busca = busca_linear(vet, tam, v); // chama a funcao colocando seus paramentro

	printf("%d", busca); // Imprime o resultado
	
	return 0;
}


