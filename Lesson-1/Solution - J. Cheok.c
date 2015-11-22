#include <stdio.h>

int main(void) {
	int numberOfCats = 12;
	numberOfCats = numberOfCats + 4;
	int catFood = 1500;
	int remainMonday = catFood - (numberOfCats*50);
	printf("%d", remainMonday);
	int tuesdayFood = remainMonday / numberOfCats;
	printf("%d", tuesdayFood);
	return 0;
}
