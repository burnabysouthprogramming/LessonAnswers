#include <stdio.h>

int main() {
    printf("Find out how pointless it is to do this quiz\n");
    char a1;
    char a2;
    char a3;
    char a4;
    char a5;
    char a6;
    char a7;
    char a8;
    char a9;
    char a10;
    
    int score;
    
    printf("How much time are you spending on this question?\n");
    printf("A) 1 second\n");
    printf("B) 2 seconds\n");
    printf("C) 3 seconds\n");
    printf("D) >4 seconds\n");
    scanf("%c", &a1);
    if(a1 == 'A')
    {
        score = 1;
    }
    else if(a1 == 'B')
    {
        score = 2;
    }
    else if(a1 == 'C')
    {
        score = 3;
    }
    else if(a1 == 'D')
    {
        score = 4;
    }
    printf("Your score is ");
    printf("%d", score);
    printf(" \n");
    return 0;
}

