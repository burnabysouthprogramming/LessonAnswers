#include <stdio.h>

int main()
{
    int a=0;
    int numEntered;
    
    while (a<20){
        printf("Please enter a number that isn't %d.\n", a);
        scanf("%d", &numEntered);
        if(a==numEntered){
            printf("You WINNNNN!\n");
            {break;}
        }
        
        else {
            a++;
       
        }
    }
    return 0;
    
}
