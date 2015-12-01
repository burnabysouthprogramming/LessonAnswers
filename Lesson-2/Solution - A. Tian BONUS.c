#include <stdio.h>
 
int main (void)
{
	int numCats = 12;
	numCats = numCats + 4;
	int totalFood = 1500;
 
	int remainder = totalFood - (numCats * 50);
	int foodPerCat = remainder / numCats;
 
 	printf("Morrey had %d cats! \nOn Monday he had %d grams of cat food and after feeding his cats 50 grams each, had %d grams left. \nThen on Tuesday he fed his cats again with the remainder of the food left from Monday and each cat got %d grams!", numCats, totalFood, remainder, foodPerCat);
	return 0;
}
