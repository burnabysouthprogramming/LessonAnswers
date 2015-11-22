#include <stdio.h>
 
int main(void) {
	int morreysCats = 12;
	int plusKittens = morreysCats + 4;
	int catFoodInGrams = 1500;
	int remainderMonday = ((50 * plusKittens)%catFoodInGrams);
	printf("%d", remainderMonday);
	int remianderTuesday = ((50 * plusKittens)%catFoodInGrams);
	return 0;
}
 
