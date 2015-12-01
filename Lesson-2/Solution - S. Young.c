#include <stdio.h>

int main(void) {
	int distanceTravelled = 709;
	printf ("Candice travelled %3d kilometers \n", distanceTravelled);
	float litresOfFuel = 58.3f;
	printf ("Candice used up %3f litres \n", litresOfFuel);
	
	int squirrels = 5;
	int birds = 12;
	int totalAnimals = squirrels + birds;
	printf ("Candice saw %d squirrels. Candice saw %d birds. In total, she saw %2d animals \n", squirrels, birds, totalAnimals);
	
	int hotdogsBought = 1;
	float hotdogCost = 4.75f;
	printf ("Candice bought %d hotdogs. It costed her %3f dollars \n", hotdogsBought, hotdogCost);
	
	float souvenirCost = hotdogCost * 2;
	double totalCost = souvenirCost + hotdogCost;
	printf ("The souvenir costed %2f dollars. The total cost of the souvenir and the hotdog is %2lf. \n", hotdogCost, totalCost);
	
	long gamblingMoney = 50000L;
		 totalCost = gamblingMoney + souvenirCost + hotdogCost;
	printf ("Candice spent %5ld dollars on gambling. The total cost of everything is %5lf. \n", gamblingMoney, totalCost);
	
	
	return 0;
}
