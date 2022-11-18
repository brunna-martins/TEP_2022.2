#include <stdio.h>

int main(void) {
	
	int read1 = 5, read2 = 5;
	int first[5];
	int second[5];
	int i;
	int compatible;
	
	while (read1==5 && read2==5) {
		
		compatible = 0;
		
		read1 = scanf("%1d %1d %1d %1d %1d", &first[0], &first[1], &first[2], &first[3], &first[4]);
		
		if (read1!=5) {
			return 0;
		}
		
		read2 = scanf("%1d %1d %1d %1d %1d", &second[0], &second[1], &second[2], &second[3], &second[4]);
		
		if (read2!=5) {
			return 0;
		}
		
		for(i = 0; i < 5; i++) {
			if(first[i]==second[i]) {
				compatible++;
			}
		}
		
		if (compatible==0) {
			printf("Y\n");
		} else {
			printf("N\n");
		}
		
	}
	
	return 0;
}
