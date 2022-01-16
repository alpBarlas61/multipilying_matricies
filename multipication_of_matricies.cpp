#include <stdlib.h>
#include <stdio.h>

int main()

{
	/* 
	 Multipication of Matricies
	 
	 [           			[
	 a1[00] b1[01] c1[02]    a2[00] b2[01] c2[02]
	 d1[10] e1[11] f1[12]    d2[10] e2[11] f2[12]
	 k1[20] l1[21] m1[22]    k2[20] l2[21] m2[22] 
	]		            	]
	  m1*n1      m2*n2
	 
	 n1 and m2 must be equal
	 
	 00 * 00 + 01 * 10 + 02 * 20 
	 
	 10 * 01 + 11 * 11 + 12 * 21 
	 
	 the size of new matrix will be equal to m1n2
		
	*/
	
	int row_1 ,row_2 , col_1 ,col_2,i,j,k,sum;
	
	char loop = 'Y';
	
	while(loop=='Y')
	{
		
	//Taking inputs from user
	
	printf("Enter the row size of matrix_1 :");
	scanf("%d",&row_1);
	
	printf("Enter the column size of matrix_1 :");
	scanf("%d",&col_1);
	
	printf("Enter the row size of matrix_2 :");
	scanf("%d",&row_2);
	
	printf("Enter the column size of matrix_2 :");
	scanf("%d",&col_2);
	
	
	while(col_1 != row_2)
	{
		printf("This multipication is invalid , matricies must meet the col_1 = row_2 requirement.\n");
		printf("Please create appropirate sized matricies :\n");
		
		printf("Enter the row size of matrix_1 :");
		scanf("%d",&row_1);
	
		printf("Enter the column size of matrix_1 :");
		scanf("%d",&col_1);
		
		printf("Enter the row size of matrix_2 :");
		scanf("%d",&row_2);
		
		printf("Enter the column size of matrix_2 :");
		scanf("%d",&col_2);
		
		
	}
	
	int matrix_1[row_1][col_1],matrix_2[row_2][col_2],result_mat[row_1][col_2];
	
	printf("Now specify the values for matricies...\n");
	
	// Specify values for matrix_1
	
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			printf("Register the value for matrix_1[%d][%d] place :",i,j);
			scanf("%d",&matrix_1[i][j]);
		}
	}
	
	//Display the matrix_1
	
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<row_2;j++)
		{
			printf(" %d ",matrix_1[i][j]);
		}
		printf("\n");
	}
	
	// Specify values for matrix_2
	
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf("Register the value for matrix_1[%d][%d] place :",i,j);
			scanf("%d",&matrix_2[i][j]);
		}
	}
	
	//Display the matrix_2
	
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf(" %d ",matrix_2[i][j]);
		}
		printf("\n");
	}
	
	//Multipication of matrix_1 and matrix_2
	//The size of result matrix will be equal to [row_1 col_2]
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_2;j++)
		{
			sum=0;
			for(k=0;k<row_2;k++)
			{
				sum=sum+(matrix_1[i][k]*matrix_2[k][j]);
			
				}
			//printf("%d \n",sum); just to see whether calculation works properly
			result_mat[i][j]=sum;	
		}
	}
	
	/**
	
	 Multipication of Matricies
	 
	 [           			[
	 a1[00] b1[01] c1[02]    a2[00] b2[01] c2[02]
	 d1[10] e1[11] f1[12]    d2[10] e2[11] f2[12]
	 k1[20] l1[21] m1[22]    k2[20] l2[21] m2[22] 
	]		            	]
	  m1*n1      m2*n2
	 
	 n1 and m2 must be equal
	 (m1,n2) is the size of result matrix
	 
	 00 * 00 + 01 * 10 + 02 * 20 
	 
	 10 * 01 + 11 * 11 + 12 * 21 
	 
	 the size of new matrix will be equal to m1n2
	
	
	
	**/
	
	//Display the result matrix
	printf("The result matrix : \n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf(" %d|",result_mat[i][j]);			
		}
		printf("\n");
	}
	
	printf("Would you like to continue ?(Y/N) :");
	scanf(" %c",&loop);
	
	
	}
	
	printf("Program is being closed...");
	
	
	return 0;
}
