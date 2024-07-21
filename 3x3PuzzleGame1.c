#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

// Function to display the puzzle
void displayPuzzle(int puzzle[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", puzzle[i][j]);
        }
        printf("\n");
    }
}

// Function to swap two puzzle elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to shuffle the puzzle at the beginning
void shufflePuzzle(int puzzle[SIZE][SIZE]) {
    int count = SIZE * SIZE;

    while (count > 0) {
        int randomRow = rand() % SIZE;
        int randomCol = rand() % SIZE;

        // Skip the empty cell (assuming 0 represents the empty cell)
        if (puzzle[randomRow][randomCol] != 0) {
            // Swap the selected element with the empty cell
            swap(&puzzle[randomRow][randomCol], &puzzle[SIZE - 1][SIZE - 1]);
            count--;
        }
    }
}

// Function to check if the puzzle is solved
int isPuzzleSolved(int puzzle[SIZE][SIZE]) {
    int count = 1;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (puzzle[i][j] != count && (i != SIZE - 1 || j != SIZE - 1)) {
                return 0; // Puzzle is not solved
            }
            count++;
        }
    }

    return 1; // Puzzle is solved
}

// Function to play the puzzle game
void playPuzzleGame(int puzzle[SIZE][SIZE]) {
    int moves = 0;
    int row, col;

    while (!isPuzzleSolved(puzzle)) {
        printf("\nCurrent Puzzle State:\n");
        displayPuzzle(puzzle);

        printf("Enter the row and column of the tile you want to move (1 to 3, 0 to exit): ");
        scanf("%d", &row);

        if (row == 0) {
            printf("Exiting the puzzle game. Goodbye!\n");
            exit(0);
        }

        scanf("%d", &col);

        if (row < 1 || row > SIZE || col < 1 || col > SIZE) {
            printf("Invalid input. Please enter valid row and column numbers.\n");
            continue;
        }

        // Check if the selected tile can be moved
        if ((row == SIZE && col == SIZE) || (puzzle[row - 1][col - 1] == 0)) {
            printf("Cannot move the empty cell. Please choose a numbered tile.\n");
        } else {
            // Swap the selected tile with the empty cell
            swap(&puzzle[row - 1][col - 1], &puzzle[SIZE - 1][SIZE - 1]);
            moves++;
        }
    }

    printf("\nCongratulations! Puzzle solved in %d moves.\n", moves);
}

int main() {
    srand(time(NULL));

    // Initialize the puzzle
    int puzzle[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0} // 0 represents the empty cell
    };

    // Shuffle the puzzle
    shufflePuzzle(puzzle);

    // Play the puzzle game
    playPuzzleGame(puzzle);

    return 0;
}
