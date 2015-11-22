#Lesson 1 Answers

1-5 (Other ways of doing it as well)
```c
#include <stdio.h>

int main(void) {
	int morreysCats = 12;
	morreysCats = morreysCats + 4;
	int catFood = 1500;
	
	int remainderLeft = catFood - 50 * morreysCats;
	
	int nextDayFood = remainderLeft/morreysCats;

	return 0;
}
```

##More Practice
1. ```valueone``` will have the value of ```valuetwo```
```c
#include <stdio.h>

int main(void) {
	int valueone = 2;
	int valuetwo = 8;
	valueone = valuetwo;

	return 0;
}
```
<br><br>
2. ```a``` has the value of 1 and ```b``` has the value of 2.<br><br>
3. In the first line of the function, ```a``` has the value of 3 while ```b``` has the value of 4. In the second line, ```a``` has the value of 4 and finally, the last line indicates that ```b``` has the value of 4.<br><br>
4. In the first line of the function, ```x``` has the value of 4. In the second line, ```y``` has the value of ```x``` plus one which is 5. In the last line, ```x``` has the value of 6.<br><br>
5. Answers may vary.<br><br>
6. Answers may vary.
