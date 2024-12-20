Guessing game C++

Title:Orankiiey’s Guessing Game  

*Description:*  
This C++ program is a fun and straightforward number guessing game. 
The objective is to guess a randomly generated number between 1 and 100. Players have a maximum of 5 attempts to guess the correct number. 
After each guess, the program provides feedback, indicating if the guess was too high or too low. If the player guesses correctly within the allotted attempts, they win; otherwise, they lose, and the correct number is revealed.  

*Features:*  
1. Random Number Generation: This feature allows the player to guess a random number between 1 and 100.  
2. Limited Attempts: Players may predict the number no more than five times.  
3. User Input Handling: Provides feedback while accepting and verifying user input.  
4. Guess Feedback: After every try, the player is notified if their guess was too high or too low.  
5. Game Outcome: Indicates a win if the right number is predicted or, in the event of a loss, exposes the right number. If the player fails, the application displays the right number and indicates whether they won or lost.


*Instructions for Use:*  

1. *Compilation:* Use a C++ compiler to compile the program. For instance:  
   bash
   g++ -o guessing_game guessing_game.cpp
     

2. *Execution:* Run the compiled program:  
   bash
   ./guessing_game
     

3. *Gameplay:*  
   - Follow on-screen instructions to play.  
   - Guess a number between 1 and 100.  
   - You have 5 attempts to guess correctly.  
   - After each guess, feedback is provided: "too high" or "too low."  
   - If you guess the number within 5 tries, you win. Otherwise, you lose, and the correct number is displayed. You have 5 attempts to find the correct number.

*Dependencies:*  
This program uses the iostream, cstdlib, and ctime libraries from the C++ Standard Library.  
	•	Uses the following libraries from the C++ Standard Library:
	•	iostream for input and output.
	•	cstdlib for random number generation.
	•	ctime to seed the random number generator.

Key Concepts Demonstrated:
	•	Random number generation using srand and rand.
	•	Input handling with cin and conditional statements for feedback.
	•	Loop constructs to limit the number of guesses and manage game flow.
	•	Use of control structures (if-else) to determine outcomes and provide user guidance.


Structure of Code:
1. Initialization: The current time was used to seed the random number generator.
   Choose a random number from 1 to 100.
2. Game Loop:  Permit up to five guesses to be entered by the player.
   Give feedback after comparing the input to the generated value.
3. Outcome Display:  If all tries are made, reveal the number or congratulate the participant on a correct guess.

*Additional Notes:*  
-To guarantee that a new number is produced with every iteration, the random number generator is seeded using the current time.  
- The application makes the game easy to use by providing feedback and simple instructions.  
- When the right number is guessed or all five attempts have been made, the game is over.  