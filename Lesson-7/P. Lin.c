#include <stdio.h>

int main()
{
    unsigned long long c;
    unsigned long long arbitrary =  1;
    unsigned long long inputNumber;
    printf("Hello, how are you? Insert a number and I'll give you the number's factorial.\n");
    scanf("%llu", &inputNumber);
    for(c=0;c<inputNumber;c=c+1)
    {
        arbitrary= (c+1)*arbitrary;
    }
    printf("Here! The answer is %llu", arbitrary);

    return 0;
}
