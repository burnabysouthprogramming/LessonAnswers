#include <stdio.h>

int main()
{
    int gullible;
    int i;
    i=0;
    while (i<20){
        printf ("Please enter a number that is not %d.\n", i);
        scanf ("%d",&gullible);
            if (i==gullible){
            printf ("Wow, you win.\n");
            {break;}
            }
        else {
            i++;
        }
    }
    if (i==20){
        printf ("Wow, you're more patient then I am, you win.");
    }
    return 0;
}
