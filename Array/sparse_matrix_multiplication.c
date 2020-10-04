#include<stdio.h>
void main()
{
    //First Matrix
    int r,c,size=0;
    printf("Enter the number of rows and columns of the first matrix : \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the first matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j] != 0)
            {
                size++;
            }
        }
    }
    printf("Display the first matrix entered : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    int sparseMatrix[size+1][3];
    int k = 1;
    sparseMatrix[0][0] = r; //filling no. or rows
    sparseMatrix[0][1] = c; //filling no. or columns
    sparseMatrix[0][2] = size; //filling no. of non-zero values
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
        if (a[i][j] != 0) 
        {
            sparseMatrix[k][0] = i;
            sparseMatrix[k][1] = j;
            sparseMatrix[k][2] = a[i][j];
            k++;
        }

    printf("Display the first sparse matrix : \n");
    for(int i=0;i<(size+1);i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%4d",sparseMatrix[i][j]);
        }
        printf("\n");
    }

    //Second Matrix
    int r1,c1,size1=0;
    printf("Enter the number of rows and columns of the second matrix : \n");
    scanf("%d %d",&r1,&c1);
    int a1[r1][c1];
    printf("Enter the elements of the second matrix : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
            if(a1[i][j] != 0)
            {
                size1++;
            }
        }
    }
    printf("Display the second matrix entered : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%4d",a1[i][j]);
        }
        printf("\n");
    }
    int sparseMatrix1[size1+1][3];
    int k1 = 1;
    sparseMatrix1[0][0] = r1; //filling no. or rows
    sparseMatrix1[0][1] = c1; //filling no. or columns
    sparseMatrix1[0][2] = size1; //filling no. of non-zero values
    for (int i = 0; i < r1; i++)
    for (int j = 0; j < c1; j++)
        if (a1[i][j] != 0) 
        {
            sparseMatrix1[k1][0] = i;
            sparseMatrix1[k1][1] = j;
            sparseMatrix1[k1][2] = a1[i][j];
            k1++;
        }

    printf("Display the second sparse matrix : \n");
    for(int i=0;i<(size1+1);i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%4d",sparseMatrix1[i][j]);
        }
        printf("\n");
    }

    //Multiplication

    if (3 != (size1+1))
    printf("The multiplication isn't possible.\n");
    else
    {
    int multiply[size+1][3];
    int sum=0;
    for (int c = 0; c < (size+1); c++) {
    for (int d = 0; d < 3; d++) {
        for (int k2 = 0; k < (size1+1); k2++) {
        sum = sum + sparseMatrix[c][k2]*sparseMatrix1[k2][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }
    printf("Display the multiplied sparse matrix : \n");
    for (int c = 0; c < (size+1); c++) {
    for (int d = 0; d < 3; d++) {
        printf("%4d",multiply[c][d]);
    }
    printf("\n");
}
}