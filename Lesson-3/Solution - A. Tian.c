#include <stdio.h>
 
int main (void)
{
    // initialize variables
    
	char food[15];
	char name[15];
	char name2[15];
	char animal[15];
	char emotion[10];
	char noun2[10];
	int numPhoto;
	char animal2[15];
	char color[10];
	char adj2[10];
 
    // print and scan for input
    
    printf("Enter a food (capitalize first letter) : ");
    scanf("%s", &food);
    
    printf("Enter two names of people : ");
    scanf("%s %s", &name, &name2);
    
    printf("Enter an animal (plural) : ");
    scanf("%s", &animal);
    	
    printf("Enter a negative emotion and a noun (plural) : ");
    scanf("%s %s", &emotion, &noun2);
    
    printf("Enter a number greater than 3 : ");
    scanf("%d", &numPhoto);
     	
    printf("Enter a different animal (plural) and a colour : ");
    scanf("%s %s", &animal2, &color);
     
    printf("Enter an adjective : ");
    scanf("%s", &adj2);
    
	// Mad Libs story
	
	printf("\"%s!\" the photographer said as the camera flashed. \n", food);
	printf("%s, %s and I had gone to get our photos taken today. \n", name, name2);
	printf("The first photo we took was a picture of us pretending to be %s. \n", animal);
	printf("I was a bit %s because I hadn't imagined there'd be so many %s behind us! \n", emotion, noun2);
 	printf("However, the %dth photo looked exactly as I wanted! \n", numPhoto);
  	printf("We all looked like %s wearing %s. \n", animal2, color);
 	printf("It was really %s! \n", adj2);
 
	return 0;
}
