#include <stdio.h>
#define N 10

//Preencher o vetor
int preencher(int vet[], int valor){
    
     for(int i = 0; i < N; i++){
        
        vet[i] = i;
    }
    
}

//Faz a busca linear de um valor em um vetor
int busca_linear(int vet[], int valor){
    
    int i;
    
    for(i = 0; i < N; i++){
        
        if(vet[i] == valor){
            
           return i;
        
        }
    }
    
     return -1;
    
}

//Faz a busca linear de um valor em um vetor com zero
int busca_linear_zero(int vet[], int valor){
    
    int i;
    
    for(i = 0; i < N; i++){
        
        if(vet[0] == valor){
            
           return i;
        
        }
    }
    
     return -1;
    
}




//Imprimi o vetor digitado
int imprimi(int vet[]){
    
     for(int i = 0; i < N; i++){
        
        printf(" %d ", vet[i]);

    }
    
    printf("\n");
}

//Valor ha ser buscado
int valor_buscado(int valor){
    
    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &valor);
    
    return valor;
}

int main(){
    
    int busca, busca_zero;
    int imprimi_vet;
    int preencher_vet, buscado;
    int valor;
    
    int vet[N];
    
    preencher_vet = preencher(vet, buscado);
    
    imprimi_vet = imprimi(vet); // Imprimi
    
    buscado = valor_buscado(valor); //Valor a ser buscado
    
    busca = busca_linear(vet, buscado); //Busca linear
    
    busca_zero = busca_linear_zero(vet, valor);
    
    printf("A posicao busca zero eh: %d\n", busca_zero);
    
    printf("A posicao eh: %d", busca);

    return 0;
}












