#include <stdio.h>

#define N 5

int busca_linear(int vet[], int valor){
	
	for(int i = 0; i < N; i++){
		
		if(vet[i] == valor){
			
			return i;
		}
	}
	
	return -1;
	
}

void preencher_auto(int vet[]){
	
	int i;
	
	for(i = 0; i < N; i++){
		
		vet[i] = i;
	}
	
}

void preencher_manual(int vet[]){
	
	int i;
	
	for(i = 0; i < N; i++){
		
		printf("Digite o valor na posicao %d: ", i);
		scanf("%d", &vet[i]);
	}
}

void imprimir(int vet[]){
	
	int i;
	
	for(i = 0; i < N; i++){
		
		printf(" %d ", vet[i]);
	}
	
	printf("\n");
	
	
}

void menu(int opcao, int vet[]){
		
	printf("\n----------------------------\n");
	printf("        Menu de opcoes        \n");
	printf("1 --> Preenchimento auto      \n");
	printf("2 --> Preenchimento manual    \n");
	printf("\n----------------------------\n");

	scanf("%d", &opcao);

	switch(opcao){
		
		case 1:
			preencher_auto(vet);
		break;
		
		case 2:
			preencher_manual(vet);
		break;
		
		default:
			printf("Valor Invalido!!!");
			
	}
	
	
}

int main(){
	
	int busca;
	
	int vet[N], valor, opcao;
	
	printf("Informe o valor a ser buscado: ");
	scanf("%d", &valor);
	
	menu(opcao, vet);
	
	busca = busca_linear(vet, valor);
	
	printf("\nA posicao eh: %d", busca);
	
	
	return 0;
}






