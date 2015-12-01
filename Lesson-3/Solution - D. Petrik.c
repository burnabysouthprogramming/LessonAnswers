#include <stdio.h>

int main()
{
    char name[20];
    char firstAdjective[20];
    char firstPlace[100];
    char secondName[20];
    char firstNoun[100];
    char secondAdjective[100];
    char thirdName[20];
    char bodyPart[100];
    char fourthAdjective[100];
    char firstTime[10];
    
    printf("Name?\n");
    scanf("%s", &name );
    
    printf("Adjective?\n");
    scanf("%s", &firstAdjective );
    
    printf("Place?\n");
    scanf("%s", &firstPlace);
    
    printf("Name?\n");
    scanf("%s", &secondName);
    
    printf("Noun?\n");
    scanf("%s", &firstNoun);
    
    printf("Adjective\n");
    scanf("%s", &secondAdjective);
    
    printf("Name?\n");
    scanf("%s", &thirdName);
    
    printf("Body Part?\n");
    scanf("%s", &bodyPart);
    
    printf("Adjective?\n");
    scanf("%s", &fourthAdjective);
    
    printf("Number?\n");
    scanf("%s", &firstTime);
    
    printf("%s is %s. They went to %s. %s showed up. They sucked %s. It tasted %s. They went to doctor %s because their %s felt %s. It lasted %s years. ", name, firstAdjective, firstPlace, secondName, firstNoun, secondAdjective, thirdName, bodyPart, fourthAdjective, firstTime);
// DeForrest
    return 0;
}

