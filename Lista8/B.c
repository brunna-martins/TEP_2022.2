#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	if (N==1){printf("1");}
	else if (N<4) {printf("2");}
	else if (N<8) {printf("4");}
	else if (N<16) {printf("8");}
	else if (N<32) {printf("16");}
	else if (N<64) {printf("32");}
	else {printf("64");}
	return 0;
}
