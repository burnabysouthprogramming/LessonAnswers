#include <stdio.h>
 
int main(void) {
	int morreysCats = 12;
	morreysCats = morreysCats + 4;
	int catFoodInGrams = 1500;
	int remainderLeft = 1500 - 50*morreysCats;
	printf("%d\n", remainderLeft);
	int foodPerCat = remainderLeft/morreysCats;
	printf("%d\n", foodPerCat);
	return 0;
} 
