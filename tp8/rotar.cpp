#include <stdio.h>
 
int main()
{
    int fil, col;
 
    printf("\nFilas: ");
    scanf("%d", &fil);
    printf("Columnas: ");
    scanf("%d", &col);
 
    int m[fil][col];
    int mTemp[col][fil];
 
    for (int i = 0; i < fil; i++)
    {
        printf("\nFila %d:\n", i + 1);
        for (int j = 0; j < col; j++)
        {
            printf("(%d/%d): ", j + 1, col);
            scanf("%d", &m[i][j]);
        }
    }
 
    int k = fil - 1;
    for (int i = 0; i < fil; i++)
    {
        int t = 0;
        for (int j = 0; j < col; j++)
        {
            mTemp[t++][k] = m[i][j];
        }
        k--;
    }
 
    printf("\nMatriz Rotada: \n");
    for (int i = 0; i < col; i++)
    {
        printf("| ");
        for (int j = 0; j < fil; j++)
            printf("%d ", mTemp[i][j]);
 
        printf(" |\n");
    }
 
    return 0;
}