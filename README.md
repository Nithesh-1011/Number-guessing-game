# Number Guessing Game

## Description
The **Number Guessing Game** is a simple console-based game where the player tries to guess a randomly generated number between 1 and 100. The game provides three difficulty levels, each with a different number of attempts to guess the correct number.
It is inspired from the [Expense Tracker](https://roadmap.sh/projects/expense-tracker) project featured in the [Backend Roadmap](https://roadmap.sh/backend) from [roadmap.sh](https://roadmap.sh/).

## Features
- **Three Difficulty Levels:**
  - **Easy** (10 attempts)
  - **Medium** (5 attempts)
  - **Hard** (3 attempts)
- **Random Number Generation**
- **Immediate Feedback:** Get hints if your guess is too high or too low.
- **Replay Option:** Restart the game after losing.

## How to Play
1. Run the program.
2. Choose a difficulty level:
   - Type `1` for Easy
   - Type `2` for Medium
   - Type `3` for Hard
3. Enter your guesses and follow the feedback:
   - If your guess is too low, the game will prompt you to guess higher.
   - If your guess is too high, the game will prompt you to guess lower.
   - If you guess correctly, you win!
4. If you run out of attempts, you lose, but you have an option to restart the game.

## Prerequisites
- C++ Compiler (GCC, Clang, or MSVC)

## Installation & Compilation
### Clone the Repository
```sh
git clone https://github.com/Nithesh-1011/Number-guessing-game.git
cd Number-guessing-game
```

### Compile the Program
```sh
g++ number_guessing_game.cpp -o NumberGuessingGame
```

### Run the Game
```sh
./NumberGuessingGame
```

## Example Gameplay
```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100
Please select the difficulty level:
1. Easy (10 chances)
2. Medium (5 chances)
3. Hard (3 chances)

Enter your guess: 50
Incorrect! The number is greater than 50.
Enter your guess: 75
Incorrect! The number is lesser than 75.
...
Congratulations! You guessed the correct number in 4 attempts.
```

## Future Enhancements
- Implement a graphical user interface (GUI)
- Add multiplayer mode
- Introduce a scoring system

## Author
[Srinithesh A.](https://github.com/Nithesh-1011)

