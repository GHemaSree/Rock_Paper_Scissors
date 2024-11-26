# Rock_Paper_Scissors
A simple command-line Rock, Paper, Scissors game where you play against the computer. You have 5 chances to score more points than the computer. The game will display your and the computer's choices for each round and show the final result.
##Features
    You can play 5 rounds.
    The computer makes random moves (Rock, Paper, or Scissors).
    The game keeps track of your and the computer's scores.
    The winner is determined by who gets the most points after 5 rounds.

##How to Play
    Compile and run the program using a C compiler (like GCC or Turbo C).
    Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors) when prompted.
    After 5 rounds, the game will display the results and declare the winner.

##Requirements
    A C compiler (e.g., GCC)
    Windows OS (due to system("cls") used for clearing the console)

##Example Game Flow
    *** Rock, Paper, Scissors ***

  You have 5 chances.
  Computer is your opponent.
  Whoever gets more points out of 5 wins.
  Let's start!
  
  Chance 1
  Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 2
    Computer chose: 1 (Paper)
    You chose: 2 (Scissors)
    You got a point!
  
  Chance 2
  Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 1
    Computer chose: 0 (Rock)
    You chose: 1 (Paper)
    You got a point!
  
  Chance 3
  Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 0
    Computer chose: 1 (Paper)
    You chose: 0 (Rock)
    Computer gets a point!
  
  Chance 4
  Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 2
    Computer chose: 2 (Scissors)
    You chose: 2 (Scissors)
    It's a tie!
  
  Chance 5
  Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): 0
    Computer chose: 2 (Scissors)
    You chose: 0 (Rock)
    You got a point!
    Your total points = 3
     Computer's total points = 1
          ********************
          *      YOU WON!     *
          ********************
          *** GAME OVER! ***
