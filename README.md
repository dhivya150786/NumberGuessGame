# 🎯 Number Guessing Game

A simple and interactive **Number Guessing Game built using C++**. The computer randomly selects a number between **1 and 100**, and the player tries to guess the correct number.

The program provides hints such as **"Too High"** or **"Too Low"** to help the player reach the correct answer.

## Features

*  Generates a random number between 1 and 100
*  Interactive user input
*  Provides hints after every guess
*  Counts the number of attempts
*  Handles invalid input
*  Allows the player to play multiple times
*  Displays the final number of attempts

##  Technologies Used

* **Language:** C++
* **Compiler:** GCC / MSVC
* **Libraries:**

  * `<iostream>`
  * `<cstdlib>`
  * `<ctime>`
  * `<limits>`

##  How the Game Works

1. The computer generates a random number between **1 and 100**.
2. The player enters a guess.
3. The program compares the guess with the secret number.
4. If the guess is:

   * **Too low** → The program asks for a higher number.
   * **Too high** → The program asks for a lower number.
   * **Correct** → The player wins.
5. The number of attempts is displayed.
6. The player can choose whether to play again.

##  How to Run

### Using Visual Studio

1. Open Visual Studio.
2. Create a **C++ Console Application**.
3. Add `NumberGuessingGame.cpp`.
4. Copy the program code into the file.
5. Press **Ctrl + F5** to run the program.

### Using Online Compiler

You can also run the program using an online C++ compiler such as OnlineGDB.

## Sample Output

```text
=====================================
       NUMBER GUESSING GAME
=====================================

I have selected a number between 1 and 100.
Try to guess it!

Enter your guess: 50
Too high! Try a lower number.

Enter your guess: 25
Too low! Try a higher number.

Enter your guess: 32

Congratulations! 🎉
You guessed the correct number: 32
Number of attempts: 3

Do you want to play again? (Y/N): N

=====================================
       Thanks for playing!
=====================================
```

##  Concepts Demonstrated

This project demonstrates several fundamental C++ programming concepts:

* Variables and data types
* `if`, `else if`, and `else`
* `while` loop
* `do-while` loop
* User input and output
* Random number generation
* Input validation
* Comparison operators
* Loops and conditional statements
* Standard C++ libraries

## 📂 Project Structure

```text
Number-Guessing-Game/
│
├── NumberGuessingGame.cpp
├── README.md
```

##  Future Improvements

Some possible improvements for future versions:

* Add **Easy, Medium, and Hard** difficulty levels
* Add a **maximum number of attempts**
* Implement a **scoring system**
* Add a **high-score/leaderboard system**
* Add different number ranges
* Create a graphical user interface (GUI)

##  Author

**Dhivya U**

Computer Science and Engineering Student
