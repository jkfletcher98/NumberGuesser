# NumberGuesser

create a string variable called userName. Give it the value of the response to "Hi, What is your name?"

print'Nice to meet you, {userName}! Try to guess what number I'm thinking of"

create an integer variable called correct and give it the value of a randomly generated number from 1 to 100

create an integer varibale called tries and give it the value 0

create a Boolean variable keepGoing and give it the value True

create a while keepGoing loop
	create a variable called userGuess and give it the value of the response to "Guess a number: "
	convert userGuess from string to int
	Add one to the value of tries
	if guess is correct
		print "That's correct. You win!"
		loop ends
	if guess is less than correct
		print "too low"
		loop continues
	if guess is greater than correct
		print "too high"
		loop continues
	if tries is greater than 7
		print "You've run out of guesses. Better luck next time"
		loop ends
	else
		print "Please enter an integer"
		loop continues
