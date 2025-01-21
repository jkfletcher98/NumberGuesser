#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char userName[20];
	printf("Hi! What's your name? ");
	scanf("%s", userName);
	printf("Nice to meet you, %s! Try to guess what number I'm thinking of. \n", userName);
	srand(time(NULL));
	int correct = (rand() % 100) + 1;
	printf("%d", correct);
	return 0;
} // end main
