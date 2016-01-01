#include <stdio.h>
 
int main() 
{
	char choice;
	printf ("welcome to tutor hour vending machine\n");
	printf ("A is fifteen minuets of Mr.Lee's tutoring service.\n");	
	printf ("B is fifteen minuets of Mr.Block's tutoring service.\n");
	printf ("c is fifteen minuets of Mr.Pattyson's tutoring service.\n");
	printf ("D is fifteen minuets of Ms.Chow's tutoring service.\n");
	printf ("E is fifteen minuets of Mr.Lam's tutoring service.\n");
	scanf( "%c", &choice);
	switch (choice){
	case'A':
		printf("please insert a bag of chips.\n");
		break;
	case'B':
		printf("please insert a pack of donut.\n");
		break;	
	case'C':
		printf("please insert a cup of coffee.\n");
		break;
	case'D':
		printf("please insert fried chicken.\n");
		break;
	case'E':
		printf("please insert a sweater.\n");
		break;
	default:
		printf("Have a nice day!Good luck on your test!");
	}
	return 0;
}
 
