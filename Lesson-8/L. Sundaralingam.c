#include <stdio.h>
int n;
int c;
int m;

int main()
{
    int c = 0;
    do {
    printf("Give me a number greater than\n, c");
    scanf("%d", &n);
    c++;
    }while(n > c);
    
    if(n < c){
    printf("You Win");
    }
    else{
    printf("YOU FAIL, try again\n");
    }
    return 0;
}
