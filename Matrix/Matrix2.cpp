#include "Matrix2.h"

Matrix2::Matrix2(float a_, float b_, float c_, float d_) : determinant(0.0f)
{

	a[0][0] = a_;
	a[0][1] = b_;

	a[1][0] = c_;
	a[1][1] = d_;
}

Matrix2::~Matrix2()
{

}

float Matrix2::Determinant()
{
	determinant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
	return determinant;
}

void Matrix2::Transpose(Matrix2 mat_)
{
	transpose[0][0] = mat_.a[0][0];
	transpose[0][1] = mat_.a[1][0];

	transpose[1][0] = mat_.a[0][1];
	transpose[1][1] = mat_.a[1][1];
}

void Matrix2::Inverse()
{
	inverse[0][0] = (1 / determinant) * a[1][1];
	inverse[0][1] = (1 / determinant) * -a[0][1];

	inverse[1][0] = (1 / determinant) * -a[1][0];
	inverse[1][1] = (1 / determinant) * a[0][0];
}

void Matrix2::AddMatrices(Matrix2 mat_)
{
	add[0][0] = a[0][0] + mat_.a[0][0];
	add[0][1] = a[0][1] + mat_.a[0][1];

	add[1][0] = a[1][0] + mat_.a[1][0];
	add[1][1] = a[1][1] + mat_.a[1][1];
}

void Matrix2::SubtractMatrices(Matrix2 mat_)
{
	subtract[0][0] = a[0][0] - mat_.a[0][0];
	subtract[0][1] = a[0][1] - mat_.a[0][1];

	subtract[1][0] = a[1][0] - mat_.a[1][0];
	subtract[1][1] = a[1][1] - mat_.a[1][1];
}

void Matrix2::MultiplyMatrices(Matrix2 mat_)
{
	multiply[0][0] = a[0][0] * mat_.a[0][0];
	multiply[0][1] = a[0][1] * mat_.a[0][1];

	multiply[1][0] = a[1][0] * mat_.a[1][0];
	multiply[1][1] = a[1][1] * mat_.a[1][1];
}

void Matrix2::DivideMatrices(Matrix2 mat_)
{
	divide[0][0] = a[0][0] / mat_.a[0][0];
	divide[0][1] = a[0][1] / mat_.a[0][1];

	divide[1][0] = a[1][0] / mat_.a[1][0];
	divide[1][1] = a[1][1] / mat_.a[1][1];
}
