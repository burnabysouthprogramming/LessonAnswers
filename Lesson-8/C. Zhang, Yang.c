#include <stdio.h>
// Carol and Yang
int main() {

	int input;

	int pythonSucks = 0;
	
	while(1) {
	
		if (pythonSucks >= 20) {
			printf("Wow, you're more patient then I am, you win.\n");
			break;
		}
		
		printf("number that is not %d\n", pythonSucks);
		scanf("%d", &input);
		
		if (input == pythonSucks) {
			break;
		}
		
		pythonSucks++;
		
	}

	return 0;
}
