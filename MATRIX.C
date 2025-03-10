#include<stdio.h>
#include<conio.h>
#define max 10

void add(int a[max][max], int b[max][max], int sum[max][max], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    sum[i][j] = a[i][j] + b[i][j];
	}
    }
    printf("Addition of two matrices:\n");
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    printf("%d ", sum[i][j]);
	}
	printf("\n");
    }
}

void subtraction(int a[max][max], int b[max][max], int sub[max][max], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    sub[i][j] = a[i][j] - b[i][j];
	}
    }
    printf("Subtraction of two matrices:\n");
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    printf("%d ", sub[i][j]);
	}
	printf("\n");
    }
}

void multiply(int a[max][max], int b[max][max], int mul[max][max], int rows, int cols)
{
    int i, j, k;
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    mul[i][j] = 0;
	    for(k = 0; k < cols; k++)
	    {
		mul[i][j] += a[i][k] * b[k][j];
	    }
	}
    }
    printf("Multiplication of two matrices:\n");
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    printf("%d ", mul[i][j]);
	}
	printf("\n");
    }
}
void transpose(int a[max][max], int b[max][max], int rows, int cols)
{
    int i, j;
    printf("transform of two matrix");
    printf("\nfirst matrix");
    printf("\n");
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    printf("%d\t",a[j][i]);
	}
	printf("\n");
    }
    printf("\nsecond matrix");
    printf("\n");
    for(i=0;i<rows;i++)
    {
	for(j=0;j<cols;j++)
	{
		printf("%d\t",b[j][i]);
	}
	printf("\n");
	}
}
void main()
 {
	int a[max][max], b[max][max], result[max][max], rows, cols, i, j,select,start=0;
	
	printf("Enter the number of rows and columns: ");
	scanf("%d%d", &rows, &cols);

       printf("Enter the elements of the first matrix:\n");
       for(i = 0; i < rows; i++)
      {
		for(j = 0; j < cols; j++)
		{
			printf("Element [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j < cols; j++)
	{
	    printf("Element [%d][%d]: ", i, j);
	    scanf("%d", &b[i][j]);
	}
    }
     printf("first matrix\n");
     for(i = 0; i < rows; i++)
      {
		for(j = 0; j < cols; j++)
		{

			printf("%d\t", a[i][j]);
		}
		printf("\n");
      }
     printf("second matrix\n");
     for(i = 0; i < rows; i++)
      {
		for(j = 0; j < cols; j++)
		{

			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf( "\n👉 If the user selects 1, perform A + B");
	printf( "\n👉 If the user selects 2, perform A - B");
	printf( "\n👉 If the user selects 3, perform A × B");
	printf( "\n👉 If the user selects 4, compute the Transpose of A and B");
	printf( "\n👉 If the user selects 5, Exit the program");
	printf("\n");
	start:
	if(start>=1)
	{
		printf("invalid number please re-select the number\n");
	}
	scanf("%d",&select);
	switch(select){
		 case(1):
			add(a,b, result, rows, cols);
			break;
		case(2):
			subtraction(a, b, result, rows, cols);
			break;
		case(3):
			multiply(a, b, result, rows, cols);
			break;
		case(4):
			transpose(a,b,rows,cols);
			break;
		case(5):
			printf("exit the loop");
			break;
		default:
			start++;
			goto start;
	 }
  	getch();
}
