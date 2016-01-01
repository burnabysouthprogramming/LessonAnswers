#include <stdio.h>
 
int main(void)
{
	int morreyCats = 12;
	int kittiesInLitter = 4;
	int totalCatFood = 1500;
	int amountFoodPerCat = 50;
 
	int totalCats = morreyCats + kittiesInLitter;
	int remainingCatFood = totalCatFood - (amountFoodPerCat * totalCats);
	int leftoverPerCat = remainingCatFood / totalCats; 
	return 0;	
}
