#include <stdio.h>

void grading_system(int grade);

int main() {
    
    int grade;
    
    printf("type your grade here ");
    scanf("%d", &grade);
    
    grading_system(grade);
    return 0;
}


void grading_system(int grade){
     if (grade > 85) {
         printf("A \n");
     }
     
     else if (grade > 72){
         printf("B \n");
     }
     
     else if (grade > 66){
         printf("C+ \n");
         
     }
     
     else if (grade > 59){
         printf("C \n");
         
         
     }
     
     else if (grade > 49){
         printf("C- \n");
     }
     else {
        printf("F \n");
     }
}
