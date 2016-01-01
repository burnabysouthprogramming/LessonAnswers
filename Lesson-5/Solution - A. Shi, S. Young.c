#include <stdio.h>

int main(void) {
	
	char inputOne;
	
	printf ("Hello, buy something awesome.\n For instant noodles press A.\n For Hersheys Cookies and Cream Chocolate bar press B.\n For sleep press C.\n For a good mark in physics press D.\n");
 	scanf ("%c", &inputOne);
 	
 	switch (inputOne) {
 		case 'A' :
 			printf ("You got noodles.\n Cool.\n");
 			break; 
 		case 'B' :
 			printf ("Chocolate.\n Enough said.\n");
 			break;
 		case 'C' : 
 			printf ("Go get some sleep.\n");
 			break;
 		case 'D' :
 			printf ("This is the only way I can get an A in physics.\n");
 			break;
 	}	
 	
 	printf ("Congratulations!\n You got an %c.\n", inputOne );
 	
	return 0;
}
