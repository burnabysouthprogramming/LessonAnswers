#include <stdio.h>
int percentageGiven;
int letterGrade;

int Grade(int percentageGiven){
    if (percentageGiven >=86){
            return 1;
    }
    else if (percentageGiven >=73){
            return 2;
    }
    else if (percentageGiven >=67){
            return 3;
    }
    else if (percentageGiven >=60){
            return 4;
    }
    else if (percentageGiven >=50){
            return 5;
    }
    else {
            return 6;
    }
    return 0;
}

int main()
{
    printf("Hello.\nWelcome to Paul's Grading Machine where he makes fun of your marks!\nEnter your percentage as an integer between 0-100, and I'll give you your grade!\n");
    scanf("%d", &percentageGiven);
    int result;
    result = Grade(percentageGiven);
    if (result==1){
            printf("You got an A!");
    }
    else if (result==2){
            printf("B! You are not a B-sian...!");
    }
    else if (result==3){
            printf("C+, no dinner for you tonight!");
    }
    else if (result==4){
            printf("C???? Who are you?");
    }
    else if (result==5){
            printf("C-, no comment");
    }
    else {
            printf("F! F*** Off.");
    }
    
    
    return 0;
}
