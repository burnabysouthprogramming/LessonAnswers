#include <stdio.h>
 
int main (void)
{
	int numCats = 12;
	numCats = numCats + 4;
	int totalFood = 1500;
 
	int remainder = totalFood - (numCats * 50);
	int foodTues = remainder / numCats;
 
	return 0;
}
