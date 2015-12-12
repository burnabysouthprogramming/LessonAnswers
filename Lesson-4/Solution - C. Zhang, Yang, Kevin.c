#include <stdio.h>

int main() {
    
    int titan = 0;
    int orange = 0;
    int shoes = 0;
    int z = 0;
    int input = 0;
    
    printf("Which Arbitrarily Chosen Object Are You?\n");
    sleep(1.5);
    printf("QUESTION ONE:\n");
    sleep(1.5);
    printf("What's your favourite colour?\n");
    sleep(1.5);
    printf(" 1. yellow\n");
    sleep(1.5);
    printf(" 2. orange\n");
    sleep(1.5);
    printf(" 3. silver\n");
    sleep(1.5);
    printf(" 4. red\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        titan = titan + 1;
    }
    
    else if(input == 2) {
        orange = orange + 1;
    }
    
    else if(input == 3) {
        shoes = shoes + 1;
    }
    
    else if (input == 4) {
        z = z + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION TWO:\n");
    sleep(1.5);
    printf("How much do you like travelling?\n");
    sleep(1.5);
    printf(" 1. Yes\n");
    sleep(1.5);
    printf(" 2. I like travelling really fast\n");
    sleep(1.5);
    printf(" 3. Not at all\n");
    sleep(1.5);
    printf(" 4. I like travelling in a downwards direction\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        shoes = shoes + 1;
    }
    
    else if(input == 2) {
        titan = titan + 1;
    }
    
    else if(input == 3) {
        orange = orange + 1;
    }
    
    else if (input == 4) {
        z = z + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }

    printf("QUESTION THREE:\n");
    sleep(1.5);
    printf("Big or small?\n");
    sleep(1.5);
    printf(" 1. Moderately large\n");
    sleep(1.5);
    printf(" 2. Large\n");
    sleep(1.5);
    printf(" 3. Exist in a plane where this question doesn't apply\n");
    sleep(1.5);
    printf(" 4. Hollow\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        orange = orange + 1;
    }
    
    else if(input == 2) {
        titan = titan + 1;
    }
    
    else if(input == 3) {
        z = z + 1;
    }
    
    else if (input == 4) {
        shoes = shoes + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION FOUR:\n");
    sleep(1.5);
    printf("What's right?\n");
    sleep(1.5);
    printf(" 1. Yes\n");
    sleep(1.5);
    printf(" 2. Left\n");
    sleep(1.5);
    printf(" 3. I don't understand\n");
    sleep(1.5);
    printf(" 4. 8\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        titan = titan + 1;
    }
    
    else if(input == 2) {
        shoes = shoes + 1;
    }
    
    else if(input == 3) {
        orange = orange + 1;
    }
    
    else if (input == 4) {
        z = z + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION FIVE:\n");
    sleep(1.5);
    printf("Where are you usually located?\n");
    sleep(1.5);
    printf(" 1. IN SPACE\n");
    sleep(1.5);
    printf(" 2. Digitally\n");
    sleep(1.5);
    printf(" 3. On the ground\n");
    sleep(1.5);
    printf(" 4. California\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        titan = titan + 1;
    }
    
    else if(input == 2) {
        z = z + 1;
    }
    
    else if(input == 3) {
        shoes = shoes + 1;
    }
    
    else if (input == 4) {
        orange = orange + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION SIX:\n");
    sleep(1.5);
    printf("Why?\n");
    sleep(1.5);
    printf(" 1. Yes\n");
    sleep(1.5);
    printf(" 2. Z\n");
    sleep(1.5);
    printf(" 3. SPACE\n");
    sleep(1.5);
    printf(" 4. Asexual reproduction\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        shoes = shoes + 1;
    }
    
    else if(input == 2) {
        z = z + 1;
    }
    
    else if(input == 3) {
        titan = titan + 1;
    }
    
    else if (input == 4) {
        orange = orange + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION SEVEN:\n");
    sleep(1.5);
    printf("How much do you interact with humans?\n");
    sleep(1.5);
    printf(" 1. Only once\n");
    sleep(1.5);
    printf(" 2. A few times\n");
    sleep(1.5);
    printf(" 3. A whole bunch\n");
    sleep(1.5);
    printf(" 4. They don't seem to like me very much\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        orange = orange + 1;
    }
    
    else if(input == 2) {
        titan = titan + 1;
    }
    
    else if(input == 3) {
        shoes = shoes + 1;
    }
    
    else if (input == 4) {
        z = z + 1;
    }
    
    printf("QUESTION EIGHT:\n");
    sleep(1.5);
    printf("What do you think of bees?\n");
    sleep(1.5);
    printf(" 1. What are bees?\n");
    sleep(1.5);
    printf(" 2. I'm nothing without them\n");
    sleep(1.5);
    printf(" 3. Nice\n");
    sleep(1.5);
    printf(" 4. They buzz too much\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        titan = titan + 1;
    }
    
    else if(input == 2) {
        orange = orange + 1;
    }
    
    else if(input == 3) {
        z = z + 1;
    }
    
    else if (input == 4) {
        shoes = shoes + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION NINE:\n");
    sleep(1.5);
    printf("What's your temperature?\n");
    sleep(1.5);
    printf(" 1. Edible\n");
    sleep(1.5);
    printf(" 2. Swear-word-inducingly cold\n");
    sleep(1.5);
    printf(" 3. Touch your screen to find out\n");
    sleep(1.5);
    printf(" 4. 30 degrees\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        orange = orange + 1;
    }
    
    else if(input == 2) {
        titan = titan + 1;
    }
    
    else if(input == 3) {
        z = z + 1;
    }
    
    else if (input == 4) {
        shoes = shoes + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    printf("QUESTION TEN:\n");
    sleep(1.5);
    printf("What is life?\n");
    sleep(1.5);
    printf(" 1. Strange\n");
    sleep(1.5);
    printf(" 2. Saturn\n");
    sleep(1.5);
    printf(" 3. Spicy\n");
    sleep(1.5);
    printf(" 4. Ah, S***\n");
    
    scanf("%d", &input);
    
    if(input == 1) {
        orange = orange + 1;
    }
    
    else if(input == 2) {
        titan = titan + 1;
    }
    
    else if(input == 3) {
        shoes = shoes + 1;
    }
    
    else if (input == 4) {
        z = z + 1;
    }
    
    else {
        printf("YOU DIDN'T DO IT RIGHT, YO\n");
    }
    
    if (orange == 5) {
	printf("You are an orange:\nNaturally divided into sections, and extremely annoying to peel, you are the face of a larger group that hides deeper, more bitter origins than it lets on.\nPerhaps you should tell the truth sometimes.");
    }

    else if (orange > 5) {
        printf("You are really like an orange:\nNaturally divided into sections, and extremely annoying to peel, you are the face of a larger group that hides deeper, more bitter origins than it lets on.\nPerhaps you should tell the truth sometime.");
    }
    
    else if (orange > 3) {
        printf("You are kind of like an orange, but not enough to warrant a description.\n");
    }
    
    else if (orange > 1) {
        printf("You are very mildly like an orange.\n");
    }

    if (titan == 10) {
	printf("You are Saturn's 19th moon:\nIf you can't remember which one that is, then you don't deserve to unlock this description.\n");
    }
    
    else if (titan > 5) {
        printf("You are really like Saturn's 19th moon:\nIf you can't remember which one that is, then you don't deserve to unlock this description.\n");
    }
    
    else if (titan > 3) {
        printf("You are kind of like Saturn's 19th moon, but not enough to warrant a description.\n");
    }
    
    else if (titan > 1) {
        printf("You are very mildly like Saturn's 19th moon.\n");
    }

    if (z == 10) {
	printf("You are the z-piece from Tetris:\nOnly aficionado and the obsessed can appreciate you.\n");
    }
    
    else if (z > 5) {
        printf("You are really like the z-piece from Tetris:\nOnly aficionado and the obsessed can appreciate you.\n");
    }
    
    else if (z > 3) {
        printf("You are kind of like the z-piece from Tetris, but not enough to warrant a description.\n");
    }
    
    else if (z > 1) {
        printf("You are very mildly like the z-piece from Tetris.\n");
    }

    if (shoes == 10) {
	printf("You are shoes that are held together by duct tape:\nYou belong to the poor.\n");
    }
    
    if (shoes > 5) {
        printf("You are really like shoes that are held together by duct tape:\nYou belong to the poor.\n");
    }
    
    else if (shoes > 3) {
        printf("You are kind of like shoes that are held together by duct tape, but not enough to warrant a description.\n");
    }
    
    else if (shoes > 1) {
        printf("You are very mildly like shoes that are held together by duct tape.\n");
    }
    return 0;
    //par Carol Zhang, Yang Zhong
}

