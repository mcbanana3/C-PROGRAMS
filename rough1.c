#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    // Create a 2D array to represent the chessboard and initialize it to 0
    int chessboard[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            chessboard[i][j] = 0;
        }
    }

    // Mark the positions where the queen can move
    for (int i = 0; i < 8; i++) {
        chessboard[i][m] = 1; // Vertical
    }

    for (int j = 0; j < 8; j++) {
        chessboard[n][j] = 1; // Horizontal
    }

    for (int i = n, j = m; i >= 0 && j >= 0; i--, j--) {
        chessboard[i][j] = 1; // Diagonal (up-left)
    }

    for (int i = n, j = m; i < 8 && j < 8; i++, j++) {
        chessboard[i][j] = 1; // Diagonal (down-right)
    }

    for (int i = n, j = m; i >= 0 && j < 8; i--, j++) {
        chessboard[i][j] = 1; // Diagonal (up-right)
    }

    for (int i = n, j = m; i < 8 && j >= 0; i++, j--) {
        chessboard[i][j] = 1; // Diagonal (down-left)
    }

    // Print the chessboard pattern
    printf("Chessboard pattern with queen's possible moves:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == n && j == m) {
                printf("Q "); // Queen's current position
            } else if (chessboard[i][j] == 1) {
                printf("X "); // Queen can move here
            } else {
                printf(". "); // Empty space
            }
        }
        printf("\n");
    }

    return 0;
}
