#include <stdio.h>
// by Carol and Yang
void theZeroethFunction(float grade);


int main() {
    
    float entry;
    int notEntry;
    float totalYouGot;
    float totalPossible;
    float percentage;
    int loopEnd = 0;
    
    printf("This is the grading machine. It grades.\nYou wanna do it the more complicated way? 1 for yes, 0 for no.\n");
    scanf("%d", &notEntry);
    
    if (notEntry == 1) {
        while (loopEnd == 0) {
            printf("What did you get for this assignment?\n");
            scanf("%f", &entry);
            totalYouGot += entry;
            printf("What was this assignment out of?\n");
            scanf("%f", &entry);
            totalPossible += entry;
            printf("Done? 1 for yes, 0 for no.\n");
            scanf("%d", &notEntry);
            if (notEntry == 1) {
                loopEnd = 1;
            }
        }
    percentage = (totalYouGot / totalPossible) * 100;
    printf("Your percentage:%.2f \n", percentage);
    theZeroethFunction(percentage);
    }
    
    else if (entry == 0) {
        printf("Type yo' grade.\n");
        scanf("%f", &entry);
    
        theZeroethFunction(entry);
    }
    
    else {
        printf("fuck");
    }

    return 0;
}

void theZeroethFunction(float grade) {
    if (grade > 85) {
        printf("A\n");
    }
    else if (grade > 72) {
        printf("B\n");
    }
    else if (grade > 66) {
        printf("C+\n");
    }
    else if (grade > 59) {
        printf("C\n");
    }
    else if (grade > 49) {
        printf("C-\n");
    }
    else {
        printf("F\n");
    }
}
