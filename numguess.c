#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //NUMBER GUESSING GAME
    //The program will randomly generate a number between 1 and 100
    //The player will try to guess the number
    //The program will tell the player if their guess is too high, too low, or correct

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;
    
    printf("*** NUMBER GUESSING GAME ***\n");

    do{
        printf("Guess a number between %d - %d: ",min,max);
        scanf("%d",&guess);
        tries++;

        if(guess < answer){
            printf("!TOO LOW! \n");
        }
        else if(guess > answer){
            printf("!TOO HIGH! \n");
        }
        else{
            printf("!CORRECT! \n");
        }
    }while(guess != answer);

    printf("The answer is %d\n",answer);
    printf("It took you %d tries\n",tries);


    return 0;
}