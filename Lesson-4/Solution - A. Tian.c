#include <stdio.h>

int main (void)
{
    //QUIZ IS MODELLED AFTER BUZZFEED QUIZ OF SAME NAME
    
    char response[1];
    char fruit, timeDay, show, colour, pet, dessert, app, place, pattern, hero;
    int points = 0;
    
    //introduction
    printf("WHAT'S YOUR CRAYOLA COLOUR NAME? \nRespond in the form of A, B, etc. \nARE YOU READY? (Y/N) ");
    scanf("%c", &response);
    
    //questions
    printf("1. Choose a fruit. \n");
    printf("A) Strawberry. B) Banana. C) Orange. D) Lemon. \n");
    scanf("%c ", &fruit);
    
    printf("2. Choose a time of day. \n");
    printf("A) Morning. B) Afternoon. C) Early evening. D) Midnight to six in the morning. \n");
    scanf("%c ", &timeDay);
    
    printf("3. Choose a TV show. \n");
    printf("A) Doctor Who. B) The Simpsons. C) The Big Bang Theory. D) Adventure Time. \n");
    scanf("%c ", &show);
    
    printf("4. Choose a colour. \n");
    printf("A) Black. B) Blue. C) Red. D) Yellow. \n");
    scanf("%c ", &colour);
    
    printf("5. Choose a pet. \n");
    printf("A) Horse. B) Cat. C) Dog. D) Ostrich. \n");
    scanf("%c ", &pet);
    
    printf("6. Choose a dessert. \n");
    printf("A) Chocolate muffin. B) Macaroon. C) Strawberry shortcake. D) Banana bread. \n");
    scanf("%c ", &dessert);
    
    printf("7. Choose an app. \n");
    printf("A) Candy Crush. B) Tumblr. C) Facebook. D) Youtube. \n");
    scanf("%c ", &app);
    
    printf("8. Choose a place to live. \n");
    printf("A) Farm. B) Tent. C) Igloo. D) Treehouse. \n");
    scanf("%c ", &place);
    
    printf("9. Choose a pattern. \n");
    printf("A) Stripes. B) Polka dots. C) Checkered. D) Hearts. \n");
    scanf("%c ", &pattern);
    
    printf("10. Choose a Marvel superhero. \n");
    printf("A) Spider-Man. B) Iron Man. C) The Hulk. D) Black Widow. \n");
    scanf("%c ", &hero);
    
    //calculation of points
    if (fruit == 'A' || fruit == 'B') {
        points += 6;
    } else if (fruit == 'C' || fruit == 'D') {
        points += 3;
    }
    
    if (timeDay == 'A' || timeDay == 'B') {
        points += 6;
    } else if (timeDay == 'C' || timeDay == 'D') {
        points += 3;
    }
    
    if (show == 'A' || show == 'B') {
        points += 6;
    } else if (show == 'C' || show == 'D') {
        points += 3;
    }
    
    if (colour == 'A' || colour == 'B') {
        points += 6;
    } else if (colour == 'C' || colour == 'D') {
        points += 3;
    }
    
    if (pet == 'A' || pet == 'B') {
        points += 6;
    } else if (pet == 'C' || pet == 'D') {
        points += 3;
    }
    
    if (dessert == 'A' || dessert == 'B') {
        points += 6;
    } else if (dessert == 'C' || dessert == 'D') {
        points += 3;
    }
    
    if (app == 'A' || app == 'B') {
        points += 6;
    } else if (app == 'C' || app == 'D') {
        points += 3;
    }
    
    if (place == 'A' || place == 'B') {
        points += 6;
    } else if (place == 'C' || place == 'D') {
        points += 3;
    }
    
    if (pattern == 'A' || pattern == 'B') {
        points += 6;
    } else if (pattern == 'C' || pattern == 'D') {
        points += 3;
    }
    
    if (hero == 'A' || hero == 'B') {
        points += 6;
    } else if (hero == 'C' || hero == 'D') {
        points += 3;
    }
    
    //results
    printf("You got %d points! ", points);
    
    if (points < 30) {
        printf("You are Sizzling Red Salsa!");
    } else if (points > 30 && points < 50) {
        printf("You are Jazzberry Jam!");
    } else if (points > 50) {
        printf("You are Purple Mountain's Majesty!");
    }
    
    return 0;
}
