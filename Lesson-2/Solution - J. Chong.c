#include <stdio.h>
 
int main (void) {
	int totalDistnace = 709;
	printf ("Candice travelled %3d kilometers \n", totalDistance);
	float totalFuel = 58.3;
	printf ("Candice used up %3f litres \n", totalFuel);
 
 
	int squirrels = 5;
	int birds = 12;
	int totalAnimals = squirrels+birds;
	printf ("Candice saw %d squirrels.  Candice saw %d birds.  Candice saw %d totalanimals \n", squirrels, birds, totalAnimals);
 
	float costHotDog = 4.75;
	printf ("Candice spent %3f dollars on a hotdog \n", costHotDog);
 
	float souvenirCost = costHotDog * 2;
	int totalAmountMoney = sovenirCost + costHotDog;
	printf ("Candice spent %2f on sovenir.  Candic spent %3d as total amount of money \n", sovenirCost, totalAmountMoney);
 
	long gamblingMoney = 50000L;
		 totalCost = gamblingMoney + souvenirCost + hotdogCost;
	printf ("Candice spent %5ld dollars on gambling. The total cost of everything is %5lf. \n", gamblingMoney, totalCost);
 
 
	return 0;
}
