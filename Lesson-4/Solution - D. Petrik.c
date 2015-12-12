#include <stdio.h>

int main()
{

    char answerOne;
    char answerTwo;
    char answerThree;
    char answerFour;
    char answerFive;
    char answerSix;
    char answerSeven;
    char answerEight;
    char answerNine;
    char answerTen;
    int totalScore;
    
    printf("Find out if you're a dumbass!, Write the letter that corresponds to the answer. CAPS ONLY!\n");
    printf("What is 1+1?\n A-2\n B-3\n C-4\n D-2\n");
    scanf("%c", &answerOne);
    
    if (answerOne=='A'){
        totalScore = totalScore + 3;
    }
    
    else if (answerOne=='B'){
        totalScore = totalScore + 2;
    }
    
    else if (answerOne=='C'){
        totalScore = totalScore + 1;
    }
    
    else if (answerOne=='D'){
        totalScore==0;
    }
 

    if (totalScore==0){
        printf("You probably have a thing for dicks (chose D instead of A)");
    }
    
    else if (totalScore==1){
        printf("You tried");
    }
    
    else if (totalScore==2){
        printf("Not bad");
    }
    
    else if (totalScore==3){
        printf("(cough, cough)Tryhard(cough,cough)NEEEEEEEEEEEEEEEERD");
    }
    
    return 0;

}
//dEfORREST
