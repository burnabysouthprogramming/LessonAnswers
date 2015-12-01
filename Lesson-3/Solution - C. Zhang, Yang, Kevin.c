#include <stdio.h>
//Carol, Yang, Kevin
int main(){
    char theNameOfThePerson[6];
    char vagueAction[10];
    int numberOfDollars;
    char sacredPlace[10];
    char probablyALocation[10];
    char likelyToBeAnAdjective[10];
    char itIsMostPossiblyAPastTenseVerb[10];
    char iWas[10];
    char wereCalled[10];
    char strange[7];
    
    printf("Enter a name.\n");
    scanf("%s", &theNameOfThePerson);
    
    printf("Enter a vague action in the past tense.\n");
    scanf("%s", &vagueAction);
    
    printf("Enter a number.\n");
    scanf("%d", &numberOfDollars);
    
    printf("Enter a location that keeps things sacred.\n");
    scanf("%s", &sacredPlace);
    
    printf("Enter something that is probably a location.\n");
    scanf("%s", &probablyALocation);
    
    printf("Enter something that is likely to be an adjective.\n");
    scanf("%s", &likelyToBeAnAdjective);
    
    printf("Past tense verb.\n");
    scanf("%s", &itIsMostPossiblyAPastTenseVerb);
    
    printf("I was.\n");
    scanf("%s", &iWas);
    
    printf("Some dumb noun.\n");
    scanf("%s", &wereCalled);
    
    printf("Adjective?\n");
    scanf("%s", &strange);
    
    printf("Hello. I am a person who is obsessed with another person named %s.\n I am obsessed with %s because they once %s.\n I don't have any other passions.\n Today, %s gave me %d dollars.\n I put it inside my %s to keep it sacred forever.\n The next day, I followed %s home to their %s.\n They were %s amd they %s me.\n I was %s until they called the %s.\n This is my %s life.", theNameOfThePerson, theNameOfThePerson, vagueAction, theNameOfThePerson, numberOfDollars, sacredPlace, theNameOfThePerson, probablyALocation, likelyToBeAnAdjective, itIsMostPossiblyAPastTenseVerb, iWas, wereCalled, strange);
    
    return 0;
}



