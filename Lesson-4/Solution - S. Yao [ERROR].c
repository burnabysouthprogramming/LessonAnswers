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
    
    printf ("what is your favourite colour?\n");
    printf ("A is blue.\n");
    printf ("B is white.\n");
    printf ("C is red.\n");
    printf ("D is orange.\n");
    scanf( "%c", &answerOne);
    if(answerOne=='A'||answerOne=='a') {
        score= score + 1; 
    }
    
    else if(answerOne=='B'||answerOne=='b') {
    score= score +2;
    } 
    
    else if(answerOne=='C'||answerOne=='c') {
    score= score + 3;
    }
    
    else if(answerOne=='D'||answerOne=='d') {
    score= score + 4;
    }

    printf ("who do you like better?\n");
    printf ("A is Spiderman.\n");
    printf ("B is Batman.\n");
    printf ("C is Captain America.\n");
    printf ("D is Superman.\n");
    scanf( "%c", &answerTwo);
      if(answerTwo=='A'||answerTwo=='a') {
        score= score + 1; 
    }
    
    else if(answerTwo=='B'||answerTwo=='b') {
    score= score +2;
    } 
    
    else if(answerTwo=='C'||answerTwo=='c') {
    score= score + 3;
    }
    
    else if(answerTwo=='D'||answerTwo=='d') {
    score= score + 4;
    }
    printf ("what is your favourite cartoon?\n");
    printf ("A is Doraemon.\n");
    printf ("B is Tom and Jerry.\n");
    printf ("C is Bugsbunny.\n");
    printf ("D is Teletubbies.\n");
    scanf( "%c", &answerThree);
      if(answerThree=='A'||answerThree=='a') {
        score= score + 1; 
    }
    
    else if(answerThree=='B'||answerThree=='b') {
    score= score +2;
    } 
    
    else if(answerThree=='C'||answerThree=='c') {
    score= score + 3;
    }
    
    else if(answerThree=='D'||answerThree=='d') {
    score= score + 4;
    }
   
    if(score==3){
        printf ("you are a wonderful person");
    }
    else if (score==6){
        printf ("you are not as wonderful but still a goods person");
    }
    else if (score==9){
        printf ("you are interesting")
    }
    else if (score==12){
        printf ("yeah")
    }    
    }
    
    return 0;
}
   

