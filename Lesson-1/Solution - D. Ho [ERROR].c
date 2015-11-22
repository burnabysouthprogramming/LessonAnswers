#include <stdio.h>
 
int main(void) {
	int morreysCats = 12;
	int plusKittens = morreysCats + 4;
	int catFoodInGrams = 1500;
	int remainderMonday = ((50 * plusKittens)%catFoodInGrams);
	printf("%d", remainderMonday); 
	int remainderTuesday = ((50 * plusKittens)%remainderMonday);
	return 0;
}
