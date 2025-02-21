/*N_Queen Problem : it shows the effective way of placing 'N' queen's in a NxN board

this is a recursive approach to solve n_queen when it exicute's,
internally it creates a stack frame
it has a space complexity of O(N),
and time complexity of O(N!)
where N is the size of the board*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_N 20

int board[MAX_N][MAX_N];
int N;

void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1) {
                printf(" Q ");
            } else {
                printf(" . ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    return true;
}

bool solveNQueens(int row) {
    if (row == N) {
        printBoard();
        return true;
    }
    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1;
            solveNQueens(row + 1);
            board[row][col] = 0;
        }
    }
    return false;
}

int main() {
    printf("Enter the size of the chessboard (N): ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    printf("Solutions for %d-Queens problem:\n", N);
    solveNQueens(0);
    return 0;
}
