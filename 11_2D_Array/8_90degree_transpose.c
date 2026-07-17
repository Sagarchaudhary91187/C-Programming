// wap to rotate a matrix 90degree clockwise.
// wap to save the transpose of the given matrix in the same matrix of nxn.
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter order n (for n x n matrix): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int m[n][n];
    printf("Enter Elements of matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &m[i][j]) != 1) return 1;
        }
    }

    printf("Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d  ", m[i][j]);
        printf("\n");
    }

    // In-place transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int t = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = t;
        }
    }

    printf("Transpose of Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d  ", m[i][j]);
        printf("\n");
    }

    // Rotate 90° clockwise: reverse each row of the transposed matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int t = m[i][j];
            m[i][j] = m[i][n - 1 - j];
            m[i][n - 1 - j] = t;
        }
    }

    printf("Matrix rotated 90degree clockwise:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d  ", m[i][j]);
        printf("\n");
    }

    return 0;
}