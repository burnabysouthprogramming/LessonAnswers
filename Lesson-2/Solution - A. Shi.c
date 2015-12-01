#include <stdio.h>

int main(void) {
 int totalDistance = 709;
 float totalFuel = 58.3;
 printf ("Candice travelled %3d kilometers to get to the forest and used %3.1f litres of fuel to get there.\n", totalDistance, totalFuel);
 
 int squirrels = 5;
 int birds = 12;
 int totalAnimals = squirrels + birds;
 printf ("In the woods Candice saw %1d squirrels and %2d birds.\n In total she saw %2d animals.\n", squirrels, birds, totalAnimals);
 
 float costHotDog = 4.75;
 float costSouvenir = 2*costHotDog;
 double totalCost = costHotDog + costSouvenir;
 printf ("After hiking Candice spent %3.2f dollars on a hot dog and %3.2f dollars on a souvenir.\n In total she spent %3.2lf dollars.\n", costHotDog, costSouvenir, totalCost);
 
 long costGambling = 50000;
 totalCost = totalCost + costGambling;
 printf ("Afterwards Candice went gambling and spent %5ld dollars.\n In total she spent %7.2lf dollars in the whole day.\n", costGambling, totalCost);
 return 0;
}
