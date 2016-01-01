#include <stdio.h>

int main(void) {
  // Lirukshman Sundaralingam
  char item;
  printf(" The menu for today: Apples, Bannanas, Coconuts, Dill, Eggs\n");
  scanf("%c", &item);
  //print something -> entire menu -> tell them to write a b c d
  //scanf their input and assign that input to the variable youre evaluating in the switch
  switch(item) {
    case 'A':
printf("Apple\n");
    break;
case 'B':
printf("Bannana\n");
break;
case 'C':
printf("coconut\n");
break;
case 'D':
printf("Dill\n");
break;
case 'E':
printf("Eggs\n");
break;
}
return 0;
}
