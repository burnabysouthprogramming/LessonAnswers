#Lesson 1 Answers

#1-5
```c
#include <stdio.h>

int main(void) {
	int morreysCats = 12;
	morreysCats = morreysCats + 4;
	int catFoodInGrams = 1500;
	
	int remainderLeft = 1500 - 50 * morreysCats;
	
	int foodPerCat = remainderLeft/morreysCats;

	return 0;
}
```
