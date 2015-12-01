#include <stdio.h>

int main()
{
    char firstAdjective[20];
    char firstName[20];
    char firstPlace[20];
    char secondName[20];
    char firstVerb[20];
    char secondVerb[20];
    char secondAdjective[20];
    char secondPlace[20];
    char thirdName[20];
    char thirdVerb[20];
    char firstAdverb[20];
    
    printf("Give me an adjective\n");
    scanf ("%s", &firstAdjective);
    printf("Give me a name\n");
    scanf ("%s", &firstName);
    printf("Give me a one word place\n");
    scanf ("%s", &firstPlace);
    printf("Give me a name\n");
    scanf ("%s", &secondName);
    printf("Give me a past tense verb\n");
    scanf ("%s", &firstVerb);
    printf("Give me a past tense verb\n");
    scanf ("%s", &secondVerb);
    printf("Give me an adjective\n");
    scanf ("%s", &secondAdjective);
    printf("Give me an one word place\n");
    scanf ("%s", &secondPlace);
    printf("Give me a name\n");
    scanf ("%s", &thirdName);
    printf("Give me a past tense verb\n");
    scanf ("%s", &thirdVerb);
    printf("Give me an adverb\n");
    scanf ("%s", &firstAdverb);
    printf("%s %s went to the %s. %s met %s and they %s. They also %s and had a %s time. Afterwards, they went to %s and they met %s and they %s. They lived %s ever after!", firstAdjective, firstName, firstPlace, firstName, secondName, firstVerb, secondVerb, secondAdjective, secondPlace, thirdName, thirdVerb, firstAdverb);
    //Paul wrote this.
    return 0;
}

