#include <stdio.h>

//Faz a busca linear de um valor em um vetor

int busca_linear(int vet[], int tam, int valor){
    
    int i;
    
    for(i = 0; i < tam; i++){
        
        if(vet[i] == valor){
            
           return i;
        
        }
    }
    
     return -1;
    
}

//Preencher o vetor

int preencher(int vet[], int tam, int valor){
    
     for(int i = 0; i < tam; i++){
        
        printf("Digite o valor na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    
}

//Imprimi o vetor digitado

int imprimi(int vet[], int tam){
    
     for(int i = 0; i < tam; i++){
        
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

//Pega o tamnho do vetor

int tamanho_vet(int tam){
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    
    return tam;
}


int main(){
    
    int busca, imprimi_vet;
    int preencher_vet, buscado, tamanho;
    int valor;
    
    int vet[tamanho];
    
    tamanho = tamanho_vet(tam);
    
    buscado = valor_buscado(valor);
    
    preencher_vet = preencher(vet, tamanho, buscado);
    
    imprimi_vet = imprimi(vet, tamanho);
    
    busca = busca_linear(vet, tamanho, buscado);
    
    printf("A posicao eh: %d", busca);

    return 0;
}