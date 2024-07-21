#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ncursesw/ncurses.h>

#define SIZE 3

void displayColorPuzzle(int puzzle[SIZE][SIZE], int sW, int sH, int pX, int pY)
{
    for (int i = 0, k = -1; i < SIZE; i++, k++)
    {
        move(pY + i, sW / 2 - 3);

        for (int j = 0; j < SIZE; j++)
        {
            if (puzzle[i][j] == 0)
            {
                attrset(COLOR_PAIR(2));
                printw("   ");
                attroff(COLOR_PAIR(2));
            }
            else
            {
                attrset(COLOR_PAIR(1) | A_BOLD);
                printw(" %d ", puzzle[i][j]);
                attroff(COLOR_PAIR(1));
                attroff(A_BOLD);
            }
        }

        printw("\n");
    }

    printw("\n");
}

void displayNormalPuzzle(int puzzle[SIZE][SIZE], int sW, int sH, int pX, int pY)
{
    for (int i = 0, k = -1; i < SIZE; i++, k++)
    {
        move(pY + i, sW / 2 - 3);

        for (int j = 0; j < SIZE; j++)
            printw(" %d ", puzzle[i][j]);

        printw("\n");
    }

    printw("\n");
}

// Function to display the puzzle
void displayPuzzle(int puzzle[SIZE][SIZE])
{
    int sW, sH, pX, pY, hasColors = 0;

    getmaxyx(stdscr, sH, sW);
    getyx(stdscr, pY, pX);

    if (has_colors())
    {
        if (start_color() == OK)
        {
            init_pair(1, COLOR_YELLOW, COLOR_RED);
            init_pair(2, COLOR_GREEN, COLOR_GREEN);

            hasColors = 1;
        }
    }

    if (hasColors)
        displayColorPuzzle(puzzle, sW, sH, pX, pY);
    else
        displayNormalPuzzle(puzzle, sW, sH, pX, pY);
}

void printInCenter(char *string)
{
    int sW, sH, pX, pY = 0;

    getmaxyx(stdscr, sH, sW);
    getyx(stdscr, pY, pX);

    move(pY, (sW - strlen(string)) / 2);

    printw(string);
}

void displayInformation()
{
    printInCenter("Use Arrow Up, Down, Left and Right Keys in order to move the Empty Square.\n\n");
    printInCenter("In order to finish the puzzle, the Empty Square should be at the Bottom Right.\n\n");
    printInCenter("The Rest of the numbers should be in Ascending order.\n\n");
    printInCenter("Current Puzzle State:\n\n");
}

// Function to swap two puzzle elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to shuffle the puzzle at the beginning
void shufflePuzzle(int puzzle[SIZE][SIZE])
{
    int count = SIZE * SIZE;

    while (count > 0)
    {
        int randomRow = rand() % SIZE;
        int randomCol = rand() % SIZE;

        // Skip the empty cell (assuming 0 represents the empty cell)
        if (puzzle[randomRow][randomCol] != 0)
        {
            // Swap the selected element with the empty cell
            swap(&puzzle[randomRow][randomCol], &puzzle[SIZE - 1][SIZE - 1]);
            count--;
        }
    }
}

// Function to check if the puzzle is solved
int isPuzzleSolved(int puzzle[SIZE][SIZE])
{
    int count = 1;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE && count < SIZE * SIZE; j++, count++)
        {
            if (puzzle[i][j] != count)
                return 0; // Puzzle is not solved
        }
    }

    return 1; // Puzzle is solved
}

void getEmptyLocation(int puzzle[SIZE][SIZE], int *row, int *col)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (puzzle[i][j] == 0)
            {
                *row = i;
                *col = j;
            }
        }
    }
}

// Function to play the puzzle game
void playPuzzleGame(int puzzle[SIZE][SIZE])
{
    int moves = 0;
    int zStartRow, zStartCol, zEndRow, zEndCol = 0;
    int ch;
    char tempBuffer[100];

    getEmptyLocation(puzzle, &zStartRow, &zStartCol);

    initscr();
    keypad(stdscr, TRUE);

    while (!isPuzzleSolved(puzzle))
    {
        clear();

        displayInformation();
        displayPuzzle(puzzle);

        refresh();

        ch = getch();

        if (ch == '0')
            break;
        else
        {
            switch (ch)
            {
            case KEY_UP:
                // code for arrow up
                zEndRow = zStartRow - 1;
                zEndCol = zStartCol;
                break;
            case KEY_DOWN:
                // code for arrow down
                zEndRow = zStartRow + 1;
                zEndCol = zStartCol;
                break;
            case KEY_RIGHT:
                // code for arrow right
                zEndRow = zStartRow;
                zEndCol = zStartCol + 1;
                break;
            case KEY_LEFT:
                // code for arrow left
                zEndRow = zStartRow;
                zEndCol = zStartCol - 1;
                break;
            }
        }

        zEndRow = zEndRow < 0 ? SIZE - 1 : zEndRow >= SIZE ? 0 
                                                           : zEndRow;
        zEndCol = zEndCol < 0 ? SIZE - 1 : zEndCol >= SIZE ? 0
                                                           : zEndCol;

        swap(&puzzle[zStartRow][zStartCol], &puzzle[zEndRow][zEndCol]);

        zStartRow = zEndRow;
        zStartCol = zEndCol;
        moves++;
    }

    clear();

    displayInformation();
    displayPuzzle(puzzle);

    if (ch == '0')
        printInCenter("Exiting the puzzle game. Goodbye!\n\n");
    else
    {
        sprintf(tempBuffer, "Congratulations! Puzzle solved in %d moves.\n\n", moves);
        printInCenter(tempBuffer);
    }

    refresh();

    napms(3000);

    endwin();
}

int main()
{
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
