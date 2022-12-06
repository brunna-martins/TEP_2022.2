#include <stdio.h>

int main(void) {
	char nums[4];
	int number;
	
	scanf("%c %c %c", &nums[0], &nums[1], &nums[2]);
	
	sscanf(nums, "%d", &number);
	
	if (number%4==0) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;
}
