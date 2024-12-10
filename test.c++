#include <stdio.h>
void MatrixMultiplication(int A[][10], int B[][10], int C[][10], int row1, int col1, int row2, int col2)
{
    if (col1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                C[i][j] = 0;
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    else
    {
        printf("Multiplication is NOT possible.\n");
        return;
    }
}
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int row1, col1, row2, col2;
    printf("Enter dimensions of the matrix A: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter dimension of the matrix B: ");
    scanf("%d %d", &row2, &col2);
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    MatrixMultiplication(A, B, C, 3, 3, 3, 3);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
                    printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

