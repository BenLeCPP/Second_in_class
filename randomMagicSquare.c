
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

int main()
{
    int array[3][3];
    int random,i;
    int randvalues[9],m=0;
    int t,j;
    int attempt;
    bool isValid;
    
    srand((unsigned)time(NULL));

    for(i=0;i<9;i++)     
        randvalues[i]=i+1;

    for(i=0;i<9;i++)     
    {
        j=i+rand()/(RAND_MAX/(9-i) + 1);
        t=randvalues[j];
        randvalues[j] = randvalues[i];
        randvalues[i] = t;
    }

    for(int rows=0;rows<3;rows++)
    {
        for(int columns=0;columns<3;columns++)
        {
            array[rows][columns] = randvalues[m++];
            printf("%d " , array[rows][columns]);
        }
        printf("\n");
    }
    
    while (isValid == false )
    {
        checkSquare(array);
        attempt++;
        if (isValid = true)
        {
            printf("The total of squares generated before success: %d", attempt);
        }
        
    }
    return 0;
}

