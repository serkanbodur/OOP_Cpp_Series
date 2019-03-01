/*****************************************
* Matrix.h *
*****************************************
* IDE : Visual Studio 2015 *
* Author : Serkan Bodur *
*****************************************/
#include  "Matrix.h"
#include  <iostream>
#include <iomanip>
using namespace std;

/**
* \brief Allocate two-dimensional dynamic array into the data member of the Matrix and update rowSize and columnSize variables.
* \param matrix
* \param rowSize
* \param columnSize
*/
void Matrix_Allocate(Matrix& matrix, int rowSize, int columnSize)
{
	matrix.columnSize = columnSize;
	matrix.rowSize = rowSize;
	matrix.data = new float*[rowSize];

	for (int i = 0;i < rowSize;i++)
		matrix.data[i] = new float[columnSize];	
}

/**
* \brief Free the allocated memory for the given Matrix and assign rowSize and columnSize to -1 and data to nullptr or 0.
*/
void Matrix_Free(Matrix& matrix)
{
	for (int i = 0;i < matrix.rowSize;i++)
		free(matrix.data[i]);

	free(matrix.data);
	matrix.columnSize = -1;
	matrix.rowSize = -1;
	matrix.data = 0;
}

/**
* \brief Fill the data member of the Matrix by the given value
* \param matrix
* \param value
*/
void Matrix_FillByValue(Matrix& matrix, float value)
{
	for (int i = 0;i < matrix.rowSize;i++)	
		for (int j = 0;j < matrix.columnSize;j++)
			matrix.data[i][j] = value;
}

/**
* \brief Fill the data member of the Matrix by the corresponding elements of the given two-dimensional array
* \param matrix
* \param data
*/
void Matrix_FillByData(Matrix& matrix, float** data)
{
	for (int i = 0;i < matrix.rowSize;i++)
		for (int j = 0;j < matrix.columnSize;j++)
			matrix.data[i][j] = data[i][j];
}

/**
* \brief Display the Matrix.
* \param matrix
*/
void Matrix_Display(const Matrix& matrix)
{
	for (int i = 0;i < matrix.rowSize;i++)
	{
		for (int j = 0;j < matrix.columnSize;j++)
		{
			cout << matrix.data[i][j] << "\t";
		}
		cout << endl;
	}
}

/**
* \brief Call Matrix_Allocate function for the given result Matrix and for required
* sizes and performs matrix addition for the given first two matrixes by saving the result into the Matrix named result.
* \param matrix_left
* \param matrix_right
* \param result
*/
void Matrix_Addition(const Matrix& matrix_left, const Matrix& matrix_right, Matrix& result)
{	
	for (int i = 0;i < result.rowSize;i++)
		for (int j = 0;j < result.columnSize;j++)
			result.data[i][j] = matrix_left.data[i][j] + matrix_right.data[i][j];	
}

/**
* \brief Call Matrix_Allocate function for the given result Matrix and for required
* sizes and performs matrix substruction for the given first two matrixes by saving the result into the Matrix named result.
* \param matrix_left
* \param matrix_right
* \param result
*/
void Matrix_Substruction(const Matrix& matrix_left, const Matrix& matrix_right, Matrix& result)
{
	for (int i = 0;i < result.rowSize;i++)
	{
		for (int j = 0;j < result.columnSize;j++)
		{
			result.data[i][j] = matrix_left.data[i][j] - matrix_right.data[i][j];
		}
	}
}

/**
* \brief Call Matrix_Allocate function for the given result Matrix and for required
* sizes and performs matrix multiplication for the given first two matrixes by saving the result into the Matrix named result.
* \param matrix_left
* \param matrix_right
* \param result
*/
void Matrix_Multiplication(const Matrix& matrix_left, const Matrix& matrix_right, Matrix& result)
{
	for (int i = 0; i<matrix_left.rowSize; i++)
	{
		for (int j = 0; j<matrix_right.columnSize; j++)
		{
			for (int k = 0; k < matrix_left.columnSize;)
			{				
				result.data[i][j] += (matrix_left.data[i][k] * matrix_right.data[k][j]);	
				k++;
			}
		}
	}
}

/**
* \brief Call Matrix_Allocate function for the given result Matrix and for required
* sizes and performs scalar matrix multiplication (Multiply each element of the data member by the given constant value)
* for the given matrix by saving the result into the Matrix named result.
* \param matrix_left
* \param scalarValue
* \param result
*/
void Matrix_Multiplication(const Matrix& matrix_left, float scalarValue, Matrix& result)
{
	for (int i = 0;i < result.rowSize;i++)
	{
		for (int j = 0;j < result.columnSize;j++)
		{
			result.data[i][j] = scalarValue*matrix_left.data[i][j];
		}
	}
}

/**
* \brief Call Matrix_Allocate function for the given result Matrix and for required
* sizes and performs scalar matrix division (Divide each element of the data member by the given constant value)
* for the given matrix by saving the result into the Matrix named result.
* \param matrix_left
* \param scalarValue
* \param result
*/
void Matrix_Division(const Matrix& matrix_left, float scalarValue, Matrix& result)
{

	for (int i = 0;i < result.rowSize;i++)
		for (int j = 0;j < result.columnSize;j++)
			result.data[i][j] = scalarValue / matrix_left.data[i][j];	
}