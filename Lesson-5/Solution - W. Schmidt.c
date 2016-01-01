#include <stdio.h>

int main(void) {

	char vend;
	char vendedItem;
	printf("Welcome. Request an Item\n");
	scanf("%c", &vend);
	switch (vend) {
		case 'A': printf("Enjoy your Polla\n");
			      break;
		case 'B': printf("Enjoy your Culo\n");
				  break;
		case 'C': printf("Enjoy your Pollo de Boca");
				  break;
		case 'D': printf("Enjoy your Trabajo del borde");
				  break;
		case 'E': printf("Enjoy your Uvas de vida");
				  break;
		default:  printf("That's the wrong numba");
	}
	return 0;
}
