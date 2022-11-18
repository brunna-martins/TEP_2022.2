#include <stdio.h>

int main(){
	int G,P,S,V,T=1;
	int i, p, q, w, a, k, v, b, j;
	int placar[100][100];
	int pontuacao [10][101];
	int nova_pontuacao[100];
	int maior=0;
	int conta;
	
	do{
		scanf("%d", &G);
		scanf("%d", &P);
		
		if (G==0 || P == 0) {
			break;
		}
		
		for (i=0; i<G; i++){
			for(j=0; j<P;j++){
				scanf("%d", &placar [i][j]);
			}
		}
		scanf("%d", &S);
		
		for (q=0; q<S; q++){
			scanf("%d", &V);
			for(w=0; w<V;w++){
				scanf("%d", &pontuacao[q][w]);
			}
		}
		
		for (b=0;b<100;b++){
			nova_pontuacao[b]= 0;
		}
		
		for (k=0; k<S; k++){
			for(v=0;v<P;v++){
				for (i=0; i<G; i++){
					for(j=0; j<P;j++){
						if(placar [i][j] == T){
							nova_pontuacao[j] = nova_pontuacao[j] + pontuacao[k][v];
						}
					}
				}
				T++;
			}
			T=1;
			for (a=0;a<P;a++){
				if(nova_pontuacao[a]>maior){
					maior = nova_pontuacao[a];
					conta = a + 1;
				} 
			}
			printf("%d", conta);
			
			for (i=conta; i<P;i++){
				if(maior == nova_pontuacao[i]){
					printf(" %d", i+1);
				}
			}
			printf("\n");
			for (b=0;b<100;b++){
				nova_pontuacao[b]= 0;
			}
			maior=0;
			conta=0;
		}
		
		for (i=0; i<G; i++){
			for(j=0; j<P;j++){
				placar [i][j]=0;
			}
		}
		
		for (q=0; q<S; q++){
			
			for(w=0; w<P;w++){
				pontuacao[q][w]=0;			
			}
		}
		
	}while (G!=0 || P!=0);
	
	return 0;
}
