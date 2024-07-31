<pre>
  Description
Includes and Namespaces:

<iostream> for input and output operations.
<cstdlib> for the rand() and srand() functions to generate random numbers.
<ctime> for the time() function to seed the random number generator.
using namespace std; to avoid prefixing std:: before every standard library object.
Variables:

range: The range of numbers (1 to 100).
maxAttempts: The maximum number of attempts allowed (5).
numberToGuess: The randomly generated number the player needs to guess.
guess: The player's current guess.
Random Number Generation:

srand(static_cast<unsigned int>(time(0))): Seeds the random number generator with the current time.
numberToGuess = rand() % range + 1: Generates a random number within the range of 1 to 100.
Game Logic:

A loop allows the player to guess the number and provides feedback on whether the guess was too high or too low. The loop runs for a maximum of maxAttempts.
Input validation ensures that the player's guess is within the valid range. Invalid guesses do not count towards the attempt limit.
If the player guesses correctly, the game congratulates them and ends.
If the player exhausts all attempts, the game reveals the correct number.
</pre>
