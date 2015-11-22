#include <stdio.h>

int main(void) {
	int morreysCats = 12;
	int plusKittens = morreysCats + 4;
	int catFoodInGrams = 1500;
	int remainderMonday = catFoodInGrams-(50 * plusKittens);
	printf("%d",remainderMonday);
	int remainderTuesday = remainderMonday-(50 * plusKittens);	
	printf("%d",remainderTuesday);
	return 0;
}
