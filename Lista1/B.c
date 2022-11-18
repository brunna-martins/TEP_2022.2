#include <stdio.h>

int main(void) {
	int N, M;
	int i;
	int aux1, aux2;
	int cidades[51] = {0};
	
	scanf("%d %d", &N, &M);
	
	for (i = 0; i < M; i++) {
		scanf("%d %d", &aux1, &aux2);
		cidades[aux1-1]++;
		cidades[aux2-1]++;
	}
	
	for (i = 0; i < N; i++) {
		printf("%d\n", cidades[i]);
	}
	return 0;
}
