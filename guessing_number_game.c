#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/**
 * void guess - a function that generate a number in the range
 * [1, N] and checks if the ganerated number is the same as the
 * guessed number or not.
 * @rand: generates a random number each time.
 * @srand: resets the random number each time.
 */
void guess(int N)
{
	int number, guess, numberofguess = 0;
srand(time(NULL));
	number = rand() % N;
	printf("Guess a number between");
	printf("1 and %d\n", N);
do {
	if (numberofguess > 9)
{
		 printf("\nyou loose\n");
break;
}
	 scanf("%d", &guess);
if (guess > number)
{
	printf("lower number " "please!\n");
		 numberofguess++;
			}
else if (number > guess)
{
		 printf("Higher number" "please!\n");
		 numberofguess++;
}
else
		 printf("You guessed the" "number in %d" "attemps!\n",
			numberofguess);
} while (guess != number);
}

int main(void)
{
	int N = 100;
	guess(N);
	return (0);
}
