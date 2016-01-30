#include <stdio.h>

int main()
{
    char firstName[20];
    char firstDrink[20];
    char firstAppetizer[20];
    char firstEntree[20];
    char firstDessert[20];
    char secondName[20];
    char secondDrink[20];
    char secondAppetizer[20];
    char secondEntree[20];
    char secondDessert[20];

    printf("Name?\n");
    scanf("%s", &firstName );
    
    printf("Drink?\n");
    scanf("%s", &firstDrink );
    
    printf("Appetizer?\n");
    scanf("%s", &firstAppetizer );

    printf("Entree?\n");
    scanf("%s", &firstEntree );
    
    printf("Dessert?\n");
    scanf("%s", &firstDessert );
    
    printf("Name?\n");
    scanf("%s", &secondName );
    
    printf("Drink?\n");
    scanf("%s", &secondDrink );
    
    printf("Appetizer?\n");
    scanf("%s", &secondAppetizer );

    printf("Entree?\n");
    scanf("%s", &secondEntree );
    
    printf("Dessert?\n");
    scanf("%s", &secondDessert );
    
    //joshua
    printf("%s decided to order %s to drink and ordered %s to have an early snack.  Later on he ordered %s and ate %s to finish his meal.  %s unfortunatly came late and ordered %s to drink.  He also ordered %s as his early snack but they ran out.  Therefore, he ordered %s to eat and finally %s to finish his meal!", firstName, firstDrink, firstAppetizer, firstEntree, firstDessert, secondName, secondDrink, secondAppetizer, secondEntree, secondDessert);
    
    return 0;
}
