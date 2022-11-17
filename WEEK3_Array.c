#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Array input and Output
void lab1()
{
    printf("Enter Number of Values:");
    int n; scanf("%d",&n); int a[5];
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    printf("Values you have taken:");
    for (int i = 0; i < n; i++) printf("%d",a[i]);
}
//Calculate Average
void lab2()
{
    printf("Enter Number of Values:");
    int n; scanf("%d",&n); int a[5],sum=0;
    printf("\nEnter values:");
    for (int i = 0; i < n; i++) {scanf("%d",&a[i]); sum+=a[i];}
    printf("\nAverage: %d",sum/n);
}
//Minimum and maximum element in an array
void lab3()
{
    printf("Enter Number of Values:");
    int n; scanf("%d",&n); int a[5],max=0,min=a[0];
    printf("\nEnter values:");
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    for (int i = 0; i < n; i++)
    {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    printf("\nMax element: %d\nMinimum element: %d", max,min);
}
//Count total nummber of duplicate
void lab4()
{
    printf("Enter Number of Values:");
    int n; scanf("%d",&n); int a[n], duplicate=0;
    printf("\nEnter values:");
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j]) {duplicate++; break;}//break is vital!!
        }
    }
    printf("\nTotal Duplicates: %d",duplicate);
}
//Read 2D array and print the matrix
void lab5()
{
    printf("Enter the number of row and column:");
    int row, column; scanf("%d %d",&row,&column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++) scanf("%d",&array[i][j]);
    }
    printf("The matrix is:\n");
    for (int i = 0; i < row; i++,printf("\n"))
    {
        for (int j = 0; j < column; j++) printf("%d\t",array[i][j]);
    }
}
//Substruction of two matrix
void lab6()
{
    printf("Enter size aka row and column of the matrix:(two matrix must be same size!):");
    int row, column; scanf("%d %d",&row,&column);
    int array1[row][column]; int array2[row][column]; int array3[row][column];
    printf("Enter first matrix:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++) scanf("%d",&array1[i][j]);
    }
    printf("\nEnter 2nd matrix:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++) scanf("%d",&array2[i][j]);
    }
    printf("\nSubtructed Matrix is:\n");
    for (int i = 0; i < row; i++,printf("\n"))
    {
        for (int j = 0; j < column; j++) printf("%d\t",array1[i][j] - array2[i][j]);
    }
}
//Multipilcation of Two Matrix
//Daunting!!!:(
void lab7()
{
    printf("Enter row and column of the 1st matrix:");
    int row1, column1,sum =0; scanf("%d %d",&row1,&column1);
    printf("Enter row and column of the 2nd matrix:");
    int row2, column2; scanf("%d %d",&row2,&column2);
    if(column1!=row2){printf("Mutiplication is not possible."); return;}
    int array1[row1][column1]; int array2[row2][column2]; int array3[row1][column2];
    printf("Enter first matrix:");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++) scanf("%d",&array1[i][j]);
    }
    printf("\nEnter 2nd matrix:");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++) scanf("%d",&array2[i][j]);
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)array3[i][j] = 0;
    }
    for (int i = 0; i < row1; i++,sum=0)
    {
        for (int j = 0; j < column2; j++) 
        for(int k=0; k<row2; k++)
        {
            array3[i][j] += array1[i][k] * array2[k][j];
        }
    }
    printf("\nSubtructed Matrix is:\n");
    for (int i = 0; i < row1; i++,printf("\n"))
    {
        for (int j = 0; j < column2; j++) printf("%d\t",array3[i][j]);
    }
}
//Transpose of a matrix
void lab8()
{
    printf("Enter row and column of the 1st matrix:");
    int row1, column1,sum =0; scanf("%d %d",&row1,&column1);
    int array1[row1][column1]; int array2[column1][row1];
    printf("Enter first matrix:");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++) scanf("%d",&array1[i][j]);
    }
    for(int i=0; i<row1; i++)
    {
        for(int j=0;j <column1;j++) array2[j][i]=array1[i][j];
    }
    printf("Transposed Matrix is:\n");
    for(int j=0;j <column1;j++,printf("\n"))
    {
        for(int i=0; i<row1; i++) printf("%d\t",array2[j][i]);
    }
}
int main()
{
    lab8();
    return 0;
}