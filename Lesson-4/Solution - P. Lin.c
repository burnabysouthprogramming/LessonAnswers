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
    
    int score;
    char bufferVariable;
    
    printf ("Are you a nerd?\nPlease write the letter of the corresponding answer.\n");
    
    printf ("How many books have you read in the last week?\n A: more than 10 \n B: 5-10 \n C: less than 5 \n D: 0\n");
    scanf ("%c", &answerOne);
    if (answerOne=='A' || answerOne=='a'){
        score = score + 3;
    }
    else if (answerOne=='B' || answerOne=='b'){
        score = score + 2;
    }
    else if (answerOne=='C' || answerOne=='c'){
        score = score + 1;
    }
    else {
        score = score;
    }
    
    scanf ("%c", &bufferVariable);
    
    printf ("How much do you like math on a scale of 1-10\n A: 10 \n B: 7-9 \n C: 3-6 \n D: 0-3\n");
    scanf ("%c", &answerTwo);
    if (answerTwo=='A' || answerTwo=='a'){
        score = score + 3;
    }
    else if (answerTwo=='B' || answerTwo=='b'){
        score = score + 2;
    }
    else if (answerTwo=='C' || answerTwo=='c'){
        score = score + 1;
    }
    else {
        score = score;
    }
    
        
    scanf ("%c", &bufferVariable);
    
    printf ("Which of the following activities would you rather do?\n A: Doing math for fun \n B: Reading books \n C: Exercise outside \n D: Go to the movies\n");
    scanf ("%c", &answerThree);
    if (answerThree=='A' || answerThree=='a'){
        score = score + 3;
    }
    else if (answerThree=='B' || answerThree=='b'){
        score = score + 2;
    }
    else if (answerThree=='C' || answerThree=='c'){
        score = score + 1;
    }
    else {
        score = score;
    }
        
    scanf ("%c", &bufferVariable);
    
    printf ("What video games do you like the MOST?\n A: Pokemon\n B: Superhero games\n C: RPGs\n D: Others\n");
    scanf ("%c", &answerOne);
    if (answerOne=='A' || answerOne=='a'){
        score = score + 3;
    }
    else if (answerOne=='B' || answerOne=='b'){
        score = score + 2;
    }
    else if (answerOne=='C' || answerOne=='c'){
        score = score + 1;
    }
    else {
        score = score;
    }
        
    scanf ("%c", &bufferVariable);
    
    printf ("What do you do on the computer?\n A: code\n B: play video games\n C: watch videos\n D: browse social media\n");
    scanf ("%c", &answerOne);
    if (answerOne=='A' || answerOne=='a'){
        score = score + 3;
    }
    else if (answerOne=='B' || answerOne=='b'){
        score = score + 2;
    }
    else if (answerOne=='C' || answerOne=='c'){
        score = score + 1;
    }
    else {
        score = score;
    }
        
    scanf ("%c", &bufferVariable);
    
    if (score==15){
        printf ("You are a total nerd! You got a score of %d", score);
    }
    else if (score > 11){
        printf ("You are a nerd, but not a total nerd yet. You got a score of %d!", score);
    }
    else if (score > 7){
        printf ("You are in between, but you can still become a nerd. You got a score of %d!", score);
    }
    else if (score > 4){
        printf ("You are not even close to being a nerd, but there is still hope. You got a score of %d!", score);
    }
    else {
        printf ("You have a long way to go. You got a score of %d!", score);
    }
    return 0;
}

