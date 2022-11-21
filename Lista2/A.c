#include <stdio.h>

int main (void) {
	
	int group1[7];
	int group2[4];
	int x, y;
	int i;
	int groupx = 0, groupy = 0;
	
	group1[0] = 1;
	group1[1] = 3;
	group1[2] = 5;
	group1[3] = 7;
	group1[4] = 8;
	group1[5] = 10;
	group1[6] = 12;
	
	group2[0] = 4;
	group2[1] = 6;
	group2[2] = 9;
	group2[3] = 11;
	
	scanf("%d %d", &x, &y);
	
	for (i=0; i<=6; i++) {
		if (x==group1[i]) {
			groupx = 1;
		}
		if (y==group1[i]) {
			groupy = 1;
		}
	}
	
	for (i=0; i<=3; i++) {
		if (x==group2[i]) {
			groupx = 2;
		}
		if (y==group2[i]) {
			groupy = 2;
		}
	}
	
	if (x==2) {
		groupx = 3;
	}
	
	if (y==2) {
		groupy = 3;
	}
	
	if (groupx==groupy) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}
