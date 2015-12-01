#include <stdio.h>
 
int main(void) {
	int totalDistance = 709;
	float totalFuel = 58.3;
	int totalSquirrels = 5;
	int totalBirds = 12;
	int totalAnimals = totalSquirrels + totalBirds;
	float costHotDog = 4.75;
	float costSouvenir = 2 * costHotDog;
	double totalSpent = costHotDog + costSouvenir;
	long gamblingCost = 50000;
	totalSpent = totalSpent + gamblingCost;
	printf ("Candice travelled %3d kilometers to go hiking.\nCandice used %2.1f liters of gas.\nCandice saw %1d squirrels and %2d birds and %2d animals in total.\n", totalDistance, totalFuel, totalSquirrels, totalBirds, totalAnimals);
	printf ("Candice then spent %1.2f dollars on a hotdog, and %1.2f on a souvenir.\nShe then went gambling and lost %5ld, resulting in her spending a total of %5.2lf\n", costHotDog, costSouvenir, gamblingCost, totalSpent);
	return 0;
}
