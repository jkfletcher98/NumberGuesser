#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
	char userName[20];
	printf("Hi! What's your name? ");
	scanf("%s", userName);
	printf("Nice to meet you, %s! Try to guess what number I'm thinking of. \n", userName);

	srand(time(NULL));
	int correct = (rand() % 100) + 1;
	printf("%d \n", correct);

	int tries = 0;

	bool keepGoing = true;

	while (keepGoing) {
		int guess;
		printf("Guess a number between 1 and 100: ");
		scanf("%d", guess);
		if (guess == correct)
			printf("That's correct! You win!");
			bool keepGoing = false;
			else if (guess < correct)
				printf("Too low");
			else if (guess > correct)
				printf("Too high");
	} // end keepGoing

	return 0;
} // end main
