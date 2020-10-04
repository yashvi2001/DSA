#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of matrix: \n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display the matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("Minor diagonal elements are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i][n-i-1]);
    }


}