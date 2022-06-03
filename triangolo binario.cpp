  #include <stdio.h>

int busca_binaria(int vet[], int inicio, int fim, int x){
    
    int meio;

    while(inicio <= fim){// enquanto o inicio E menor ou igual ao FIM
    
        meio = (inicio + fim)/2;// metade do vetor 
    
        if(x == vet[meio]){// verificacao se o valor procurado E igual ao meio
        	
            return meio; // se valor for igual ao meiom returna o meio 
        }
        else if(x < vet[meio]){// se o valor for menor que o meuio do vetor 
        	
            fim = meio - 1;     // o meio passa a ser o FIM, entao fim recebe MEIO - 1
        }
        
        else{
        	
            inicio = meio + 1;// caso o valor seja maior que o meio, inicio recebe MEIO + 1 
        }// entao o meio do vetor passa a ser o inicio
    }
    
    return -1;
}

int main(){

	int i, j, n, cout = 0, valor = 0, lado1 = 0, lado2 = 0, aux = 0;

	while(scanf("%d", &n) != EOF){
		
		int vet[n], soma_prefixo[n]; //Dois vetores, um para armazenar os indices e o outro a soma dos indices
		
		for(i = 0; i < n; i++){
			
			soma_prefixo[i] = 0;// o vetor soma prefixo recebi na posição I o valor 0 ZERO
		}

		for(i = 0; i < n; i++){

			scanf("%d", &vet[i]);// Preenche o vetor

		}
				
		soma_prefixo[0] = vet[0];

		for(i = 0; i < n; i++){
						
			soma_prefixo[i+1] = soma_prefixo[i] + vet[i+1];// soma dos prefixos 

		}
		
		valor = soma_prefixo[n - 1]; //a varialvel VALOR recebi a soma de todos os prefixo 
		
		aux = valor/3;//a variavel AUX recebi a divisao por 3 da soma dos prefixo VALOR, dando os tres LADOS triangolo equilatero
		
		if(valor % 3 == 0){// se o valor for divisivel por 3, entao entra no laço

			for(i = 0; soma_prefixo[i] + aux*2 <= soma_prefixo[n-1]; i++){// a soma do ultimo lado com os dois lados E menos que o ultimo numero do vetor
				
				lado1 = busca_binaria(soma_prefixo, i, (n-1), (soma_prefixo[i] + aux));// chama funçao: vetor, inicio, fim, 2 LADOS 

				lado2 = busca_binaria(soma_prefixo, i, (n-1), (soma_prefixo[i] + aux*2));// vetor, inicio, fim, ultimo LADO

				if((lado1 != -1) && (lado2 != -1)){

					cout++;

				}			
			}
		}
		
		printf("%d\n", cout);
		
		cout = 0;// zerando o cont 
	
	}


	return 0;

}
