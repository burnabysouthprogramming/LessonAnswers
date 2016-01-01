#include <stdio.h>
 
int main(void) {
	int inputOne;
	printf("Welcome to the Vending Machine, where you will find all your needs!\nEnter the number before the item you would like.\n1.Chips\n2.Candy\n3.Juice\n4.Pop\n5.Mysterious Surprise\n");
	scanf("%d", &inputOne);
	switch(inputOne) {
		case 1:
			printf ("Haha, you fell for my trick. There are no chips :)");
			break;
		case 2:
			printf ("All the Skittles are for me, you ain't getting a bag! :)");
			break;
		case 3:
			printf ("Ok fine, you can have some juice. JK, still not getting anything.");
			break;
		case 4:
			printf ("Pop isn't healthy for you, you shouldn't be drinking any.");
			break;
		case 5:
			printf ("Finally, you decided to choose the surprise. YOU CAN HAVE A BIG OL'BAG OF NOTHING!");
			break;
		default:
			printf ("Please enter a valid option next time!");
			break;
	}
 
	return 0;
}
 
