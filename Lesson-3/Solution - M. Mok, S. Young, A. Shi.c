#include <stdio.h>

int main()
{
    
    char adjective[15];
    char adjectiveTwo[20];
    char adverb[10];
    char noun[15];
    char nounTwo[15];
    char pastTenseVerb[15];
    char pastTenseVerbTwo[15];
    char pastTenseVerbThree[15];
    char pluralNoun[15];
    char pluralNounTwo[15];
    char liquid[15];
    
    
    printf("Give me an adjective\n");
    scanf("%s",&adjective);
    
    printf("Give me another adjective\n");
    scanf("%s",&adjectiveTwo);
   
    printf("Give me an adverb\n");
    scanf("%s",&adverb);
    
    printf("Give me a noun\n");
    scanf("%s",&noun);
    
    printf("Give me another noun\n");
    scanf("%s",&nounTwo);
    
    printf("Give me a past tense verb\n");
    scanf("%s", &pastTenseVerb);
    
    printf("Give me a past tense verb\n");
    scanf("%s", &pastTenseVerbTwo);
    
    printf("Give me a past tense verb\n");
    scanf("%s", &pastTenseVerbThree);
    
    printf("Give me a plural noun\n");
    scanf("%s", &pluralNoun);
    
    printf("Give me a plural noun\n");
    scanf("%s", &pluralNounTwo);
    
    printf("Give me a type of liquid\n");
    scanf("%s", &liquid);
    
    printf("Once upon a time there was an %s egg.\n He is very %s.\n He could do backflips very %s.\n His good friend %s is pretty awesome.\n He also had another friend names %s.\n Eggward always %s for biology.\n He %s that class.\n Eggward %s in class everyday.\n He hates his %s in that class.\n So he killed some %s.\n And drank %s until he passed out .\n  ", adjective, adjectiveTwo, adverb, noun, nounTwo, pastTenseVerb, pastTenseVerbTwo, pastTenseVerbThree, pluralNoun, pluralNounTwo, liquid);
    //sophie, amy, matthew
    
    
    

    return 0;
}

