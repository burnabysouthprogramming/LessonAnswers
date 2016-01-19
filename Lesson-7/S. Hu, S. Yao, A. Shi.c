#include <stdio.h>

int main(){
    int i, count, sum=0;
    
    printf ("Please input your desired value of i.\n");
    scanf ("%d",&i);
    for( count=0; count<=i;++count)
    {
        sum+=count;
    }
    printf("Your sum is %d\n", sum);
return 0;
}
