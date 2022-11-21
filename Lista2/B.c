#include <stdio.h>

int main(void) {
	int H, W;
	int i, j;
	char mytext[101][101];
	
	scanf("%d %d", &H, &W);
	for (j=0; j<H; j++) {
		fgets(mytext[j], W, stdin);
	}
	
	for (i = 0; i<W+3; i++) {
		printf("#");
	}
	printf("\n");
	
	for (j=0; j<H; j++) {
		printf("#%s#", mytext[j]);
	}
	
	for (i = 0; i<W+3; i++) {
		printf("#");
	}
	
	return 0;
}
