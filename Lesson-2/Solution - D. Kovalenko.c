#include <stdio.h>
 
int main(void) {
	int totalDistance = 709;
	/* candice travelled 709 km */
	float totalFuel = 58.3f;
	/* candice used 58.3 litres of fuel */
	int squirrels = 5;
	/* candice saw 5 squirrels */
	int birds = 12;
	/* candice saw 12 birds */
	int totalAnimals = (squirrels + birds);
	/* the amount of birds and squirrels candice saw altogether */
	float hotdogCost = 4.75f;
	/* candice bought an expensive ass hotdog */
	float souvenirCost = ( 2 * hotdogCost);
	/* candice bought a souvenir, which might just be 2 hotdogs */
	float totalMoneySpent = (souvenirCost + hotdogCost);
	/* candice spent money on a hotdog and a souvenir */
	totalMoneySpent = totalMoneySpent + 50000;
	/* candice wasted a ton of money */
	printf (" candice travelled a total of %d\bkm, used %3.1f\bL of fuel, \n saw %d squirrels, and %d birds - %d animals in total. \n She also bought a hotdog costing $\b%.2f, bought a souvenir costing $\b%.2f,\n and after gambling, spent a grand total of $\b%.2f!", totalDistance, totalFuel, squirrels, birds, totalAnimals, hotdogCost, souvenirCost, totalMoneySpent);
	/* practicing using printf command */
	return 0;
}
