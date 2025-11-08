# -rock-paper-scissors-project
his is a simple Rock–Paper–Scissors game written in the C programming language. It allows the user to play against the computer in a command-line environment.
Name: iiartik
Course: BCA ar vr
Roll No: 25BCA20028

📝 Description

This is a simple Rock–Paper–Scissors game written in the C programming language.
It allows the user to play against the computer in a command-line environment.

The program:

Prompts the user to choose Rock, Paper, or Scissors.

Randomly generates the computer’s choice using the rand() and time() functions.

Compares both choices and displays whether it’s a win, loss, or draw.

Asks the player if they want to play again (y/n).

Displays a thank-you message when the game ends.

⚙️ How It Works

The player enters a number (1 for Rock, 2 for Paper, 3 for Scissors).

The computer randomly selects its move.

The result is displayed based on standard Rock–Paper–Scissors rules.

The user can continue playing or exit the game.

🧠 Concepts Used

Loops (do...while)

Conditional statements (if, else if, else)

Random number generation (rand(), srand(), time())

Basic input and output operations (scanf, printf)

💻 How to Run

Save the code in a file named rock_paper_scissors.c.

Open your terminal or VS Code.

Compile the program using:

gcc rock_paper_scissors.c -o rps


Run the program:

./rps

🎮 Example Output
===== Rock Paper Scissors Game =====

Choose an option:
1. Rock
2. Paper
3. Scissors
Enter your choice (1-3): 1
You chose: Rock
Computer chose: Paper

Computer wins!

Do you want to play again? (y/n): y
