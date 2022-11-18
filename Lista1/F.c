#include <stdio.h>

int main(void) {
	int J; // players
	int R; // rounds
	int read;
	int i, j;
	int points[500];
	int aux;
	int winner, winner_pts;
	
	for (j=0; j<500; j++) {
		points[j] = 0;
	}
	
	do {
		read = scanf("%d %d", &J, &R);
		if (read!=2) {
			break;
		}
		for (i=0; i<R; i++) {
			for (j=0; j<J; j++) {
				scanf("%d", &aux);
				points[j] += aux;
			}
		}
		/*for (j=0; j<J; j++) {
			printf("%d ", points[j]);
		}
		printf("\n");*/
		winner_pts = points[0];
		winner = 0;
		for (j=1; j<=J; j++) {
			if (points[j] == winner_pts) {
				winner = j;
				winner_pts = points[j];
			} else if(points[j]>winner_pts) {
				winner = j;
				winner_pts = points[j];
			} else {
				
			}
		}
		printf("%d\n", winner+1);
		
		for (j=0; j<500; j++) {
		points[j] = 0;
		}
		
	} while (read == 2);
	
	return 0;
}
