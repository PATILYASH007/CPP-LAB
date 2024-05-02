#include<iostream>
using namespace std;
class Matrix{
	int rows;
	int cols;
	int matrix[rows-1][cols-1];
	public:
		Matrix();
		Matrix(int r,int c);
		Matrix operator +(Matrix m);
		
};
Matrix::Matrix()
{
	rows=1;
	cols=1;
}
Matrix::Matrix(int r,int c)
{
	rows=r;
	cols=c;
}
Matrix::Matrix operator +(Matrix m)
{
	Matrix result;
	if(rows==m.)
	
}
