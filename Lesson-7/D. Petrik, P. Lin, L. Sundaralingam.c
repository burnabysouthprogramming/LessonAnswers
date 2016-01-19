#include <stdio.h>

int main()
{
    int num;
    int count;
    int total;
    printf("Insert a number to get the sum of all the previous numbers\n");
    scanf("%d", &count );
    
    for (total=0;total<count;total=total+1){
       num=num+1+total;
}
    printf("Your number is %d", num);
    // Mostly DeForrest +Paul +Lucky
    return 0;
}
