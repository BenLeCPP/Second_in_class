#include <stdio.h>
void main() 
{
    int grid[3][3];
    int i, j;
    int rowsum, columnsum, diagonalsum;

    printf("Enter the elements of the square \n");
        for(i=0; i<3; i++) 
        {
            for(j=0; j<3; j++) 
            {
                scanf("%d", &grid[i][j]);
            }
        }

    printf("\n\nMATRIX is\n");
    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++) 
        {
            printf("%3d\t", grid[i][j]);
        }
        printf("\n");
    }

  // calculate diagonal sum
    diagonalsum = 0;
    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++) 
        {
            if(i==j) 
            {
                diagonalsum = diagonalsum + grid[i][j];
            }
        }
    }

  // calculate row sum
    rowsum =0;
    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++) 
        {
            rowsum = rowsum + grid[i][j];
        }
        if(rowsum != diagonalsum) 
        {
            printf("\nThis is not a magic square");
            return;
        }
    }

  // calculate column sum
    columnsum =0;
    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++) 
        {
            columnsum = columnsum + grid[j][i];
        }
        if(columnsum != diagonalsum) 
        {
            printf("\nThis is not a magic square");
            return;
        }
    }
}