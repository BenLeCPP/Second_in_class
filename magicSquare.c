#include <stdio.h>
#include <stdbool.h>
void checkSquare(int grid[3][3])
{
    bool invalid = false;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(grid[i][j]<1||grid[i][j]>9)
            invalid = true;
        }
    }
    if (invalid)
    {
        printf("This is not a magic square.\n");
    }
  
    else
    {
        // calculate diagonal sum
        int diagonalSum = grid[0][0] + grid[1][1] + grid[2][2] ;
        bool isValid = true; 

        // calculate row sum
        for(int i=0; i<3; i++) 
        {
            int rowSum = 0;
            for(int j=0; j<3; j++) 
            {
                rowSum = rowSum + grid[i][j];
            }
            if(rowSum != diagonalSum) 
            {
                isValid = false;
                break;
            }
        }

        // calculate column sum
        for(int i=0; i<3; i++) 
        {
            int columnSum =0;
            for(int j=0; j<3; j++) 
            {
                columnSum = columnSum + grid[j][i];
            }
            if(columnSum != diagonalSum) 
            {
                isValid = false;
                break;
            }
        }

        if(isValid)
        {
            printf("This is a magic square.\n");
        }
        else
        {
            printf("This is not a magic square. \n");

        }
        
    }
}

void main() 
{
    int a[3][3] ={4, 9, 2, 3, 5, 7, 8, 1, 6};


    printf("\n---Magic Square---\n");
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            printf("%3d\t", a[i][j]);
        }
        printf("\n");
    }

    checkSquare(a);
    

  
}