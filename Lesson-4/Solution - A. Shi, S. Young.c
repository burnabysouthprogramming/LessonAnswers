#include <stdio.h>

int main()
{
    char answerOne;
    char answerTwo;
    char answerThree;
    char answerFour;
    char answerFive;
    char answerSix;
    char answerSeven;
    char answerEight;
    char answerNine;
    char answerTen;
 
    int score;
    char bufferCharacter;
    
    printf ("You are stuck on an island.\n");
    
    printf ("What do you do first?\n A is find water.\n B is find food.\n C is try to find wifi or reception.\n D is find a palm tree to cry under.\n");
    scanf ("%c", &answerOne);
    if (answerOne=='A' || answerOne=='a'){
       score = score + 3;
    }
    else if (answerOne=='B' || answerOne=='b'){
       score = score + 2;
    }
    else if (answerOne=='C' || answerOne=='c'){
       score = score + 1;
    }
    else if (answerOne=='D' || answerOne=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("You decide to build a shelter./n Where do you build it?\n A is in a dry and level location.\n B is in a cave.\n C is in a tree.\n D is on the shoreline.\n");
    scanf ("%c", &answerTwo);
    if (answerTwo=='A' || answerTwo=='a'){
       score = score + 3;
    }
    else if (answerTwo=='B' || answerTwo=='b'){
       score = score + 2;
    }
    else if (answerTwo=='C' || answerTwo=='c'){
       score = score + 1;
    }
    else if (answerTwo=='D' || answerTwo=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("The sun is setting.\n What do you do before nightfall.\n A is finish your shelter and call it a night.\n B is go weave a blanket.\n C is go hunting you still have plenty of time before the sun sets.\n D is go for a swim.\n");
    scanf ("%c", &answerThree);
    if (answerThree=='A' || answerThree=='a'){
       score = score + 3;
    }
    else if (answerThree=='B' || answerThree=='b'){
       score = score + 2;
    }
    else if (answerThree=='C' || answerThree=='c'){
       score = score + 1;
    }
    else if (answerThree=='D' || answerThree=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("You eventually go to sleep.\n You are awakened by a noise outside, what do you do?\n A is find a sharp object to use as a weapon.\n B is stay in your shelter and observe.\n C is curl up in a ball and cry.\n D is go out and fight whatever is outside, it ain't got nothing on you!\n");
    scanf ("%c", &answerFour);
    if (answerFour=='A' || answerFour=='a'){
       score = score + 3;
    }
    else if (answerFour=='B' || answerFour=='b'){
       score = score + 2;
    }
    else if (answerFour=='C' || answerFour=='c'){
       score = score + 1;
    }
    else if (answerFour=='D' || answerFour=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("After determining that you are safe, you go back to sleep.\n When you wake up you find that your campsite has been trashed, what do you do?\n A is start searching for materials that are still usable.\n B is decide to start fresh and go look for another  campsite.\n C is seek revenge and hunt down whatever did this to you.\n D is sit in the middle of what remains of your campsite and cry.\n");
    scanf ("%c", &answerSix);
    if (answerSix=='A' || answerSix=='a'){
       score = score + 3;
    }
    else if (answerSix=='B' || answerSix=='b'){
       score = score + 2;
    }
    else if (answerSix=='C' || answerSix=='c'){
       score = score + 1;
    }
    else if (answerSix=='D' || answerSix=='d') {
       score = score;
    }
   
    scanf ("%c", &bufferCharacter);
   
    printf ("Eventually leave your campsite, as you are leaving a pack of leopards starts closing in on you.\n What do you do?\n A is grab a sharp object nearby to protect yourself.\n B is scream as loud as you can and make yourself look big.\n C is grab a stick and try to train the leopards. It worked for Pi and Richard. Tigers and leopards are practically the same.\n D is crawl into the fetal position and hope that they don't notice you.\n");
    scanf ("%c", answerSeven);
    if (answerSeven=='A' || answerSeven=='a'){
       score = score + 3;
    }
    else if (answerSeven=='B' || answerSeven=='b'){
       score = score + 2;
    }
    else if (answerSeven=='C' || answerSeven=='c'){
       score = score + 1;
    }
    else if (answerSeven=='D' || answerSeven=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("After your encounter with the leopards you are tired, hungry, lonely and afraid.\n What do you do?\n A is go and search for food and water.\n B is go clean yourself, you probably smell pretty bad.\n C is go for a walk.\n D is reflect on your life and cry about it.\n");
    scanf ("%c", &answerEight);
    if (answerEight=='A' || answerEight=='a'){
       score = score + 3;
    }
    else if (answerEight=='B' || answerEight=='b'){
       score = score + 2;
    }
    else if (answerEight=='C' || answerEight=='c'){
       score = score + 1;
    }
    else if (answerEight=='D' || answerEight=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("You accidentally got your clothes wet.\n What do you do?\n A is make yourself a new outfit out of leaves .\n B is take off your clothes and hang them up to let them air dry.\n C is keep the wet clothes on.\n D is sit on a rock and cry because nothing is going your way.\n");
    scanf ("%c", &answerNine);
    if (answerNine=='A' || answerNine=='a'){
       score = score + 3;
    }
    else if (answerNine=='B' || answerNine=='b'){
       score = score + 2;
    }
    else if (answerNine=='C' || answerNine=='c'){
       score = score + 1;
    }
    else if (answerNine=='D' || answerNine=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    printf ("Night has fallen and as you are looking in the sky you see a shooting star.\n What do you wish for?\n A is for someone to come rescue you.\n B is more food.\n C is a blanket.\n D is the new IPhone.\n");
    scanf ("%c", &answerTen);
    if (answerTen=='A' || answerTen=='a'){
       score = score + 3;
    }
    else if (answerTen=='B' || answerTen=='b'){
       score = score + 2;
    }
    else if (answerTen=='C' || answerTen=='c'){
       score = score + 1;
    }
    else if (answerTen=='D' || answerTen=='d') {
       score = score;
    }
    
    scanf ("%c", &bufferCharacter);
    
    if (score>=21){
        printf("Your are awoken by the sound of a helicopter.\n You start a fire to send a smoke signal and the helicoptor comes closer.\n CONGRATULATIONS!\n You have survived the island.\n You have thrived in every situation that has come your way, in fact you did so well that you could be the next Bear Gyrlls.\n Maybe you should capitalize on your skills and create your own television show.\n");
    }
    else if (score>=10){
        printf("You are awoken by the sound of a helicopter.\n You flail your arms around and wave your jacket in the air.\n Lucky for you, your jacket is bright red and the helicopter spots you.\n Congratulations!\n You have just barely survived.\n You will need to be hospitilized when you get back to civilization and go to therapy for the rest of your life.\n At least your alive.\n ");
    }
    else {
        printf("You are awoken by the sound of a helicopter.\n You start to frantically scream for help but it never arrives and you never end up seeing a helicoptor.\n Sorry.\n This experience has been extremely tough for you and for a majority of it you were just crying.\n Knowing your mental state however you probably imagined the helicopter altogether.\n The wilderness is not for you, stay indoors.\n");
    }
    
    return 0;
}
