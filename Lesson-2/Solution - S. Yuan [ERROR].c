#include <stdio.h>
 
int main(void) {
	int distanceTravelled = 709;
	printf ("Candice travelled %d kilometres. \n ", distanceTravelled);
 
	float fuelUsed = 58.3;
	printf ("Candice used %f fuel. \n", fuelUsed);
 
	int squirrelsSeen = 5;
	printf ("Candice saw %d squirrels. \n", squirrelsSeen);
 
	int birdsSeen = 12;
	printf ("Candice saw %d birds. \n", birdsSeen);
 
	int totalAnimals = birdsSeen + squirrelsSeen;
	printf ("Candice saw %d animals in total. \n", totalAnimals);
 
	float priceHotDog = 4.75;
	printf ("Candice paid %f for a hot dog. \n", priceHotDog);
 
	float priceSouvenir = 2 * priceHotDog;
	printf ("Candice paid %f for a souvenir. \n", priceSouvenir);
 
	float priceTotal = priceHotDog + priceSouvenir;
 
	printf ("Candice paid %f for hot dog and souvenir. \n", priceTotal);
 
	priceTotal = (priceHotDog + priceSouvenir) - 50000;
 
	printf ("Candice paid %f for everything plus gambling. \n", priceTotal);
 
	return 0;
}
