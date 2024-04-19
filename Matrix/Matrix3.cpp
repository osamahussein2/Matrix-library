#include "Matrix3.h"

Matrix3::Matrix3(float a_, float b_, float c_, float d_, float e_, float f_, float g_, float h_, float i_) : determinant(0.0f)
{

	a[0][0] = a_;
	a[0][1] = b_;
	a[0][2] = c_;

	a[1][0] = d_;
	a[1][1] = e_;
	a[1][2] = f_;

	a[2][0] = g_;
	a[2][1] = h_;
	a[2][2] = i_;
}

Matrix3::~Matrix3()
{

}

float Matrix3::Determinant()
{
	// Determinant |A| = a(ei - fh) - b(di - fg) + c(dh - eg)

	determinant = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + 
		a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

	return determinant;
}

void Matrix3::Transpose(Matrix3 mat_)
{
	transpose[0][0] = mat_.a[0][0];
	transpose[0][1] = mat_.a[1][0];
	transpose[0][2] = mat_.a[2][0];

	transpose[1][0] = mat_.a[0][1];
	transpose[1][1] = mat_.a[1][1];
	transpose[1][2] = mat_.a[2][1];

	transpose[2][0] = mat_.a[0][2];
	transpose[2][1] = mat_.a[1][2];
	transpose[2][2] = mat_.a[2][2];
}

void Matrix3::MinorMatrix()
{
	minor[0][0] = (a[0][0] * a[2][2]) - (a[1][2] * a[2][1]);
	minor[0][1] = (a[1][0] * a[2][2]) - (a[1][2] * a[2][0]);
	minor[0][2] = (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]);

	minor[1][0] = (a[0][1] * a[2][2]) - (a[0][2] * a[2][1]);
	minor[1][1] = (a[0][0] * a[2][2]) - (a[0][2] * a[2][0]);
	minor[1][2] = (a[0][0] * a[2][1]) - (a[0][1] * a[2][1]);

	minor[2][0] = (a[0][1] * a[1][2]) - (a[0][2] * a[1][2]);
	minor[2][1] = (a[0][0] * a[1][2]) - (a[0][2] * a[1][2]);
	minor[2][2] = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
}

void Matrix3::AdjugateMatrix()
{
	adjugate[0][0] = (minor[0][0]);
	adjugate[0][1] = -(minor[0][1]);
	adjugate[0][2] = (minor[0][2]);

	adjugate[1][0] = -(minor[1][0]);
	adjugate[1][1] = (minor[1][1]);
	adjugate[1][2] = -(minor[1][2]);

	adjugate[2][0] = (minor[2][0]);
	adjugate[2][1] = -(minor[2][1]);
	adjugate[2][2] = (minor[2][2]);
}

void Matrix3::Inverse()
{
	inverse[0][0] = (1 / determinant) * adjugate[0][0];
	inverse[0][1] = (1 / determinant) * adjugate[0][1];
	inverse[0][2] = (1 / determinant) * adjugate[0][2];

	inverse[1][0] = (1 / determinant) * adjugate[1][0];
	inverse[1][1] = (1 / determinant) * adjugate[1][1];
	inverse[1][2] = (1 / determinant) * adjugate[1][2];

	inverse[2][0] = (1 / determinant) * adjugate[2][0];
	inverse[2][1] = (1 / determinant) * adjugate[2][1];
	inverse[2][2] = (1 / determinant) * adjugate[2][2];
}

void Matrix3::AddMatrices(Matrix3 mat_)
{
	add[0][0] = a[0][0] + mat_.a[0][0];
	add[0][1] = a[0][1] + mat_.a[0][1];
	add[0][2] = a[0][2] + mat_.a[0][2];

	add[1][0] = a[1][0] + mat_.a[1][0];
	add[1][1] = a[1][1] + mat_.a[1][1];
	add[1][2] = a[1][2] + mat_.a[1][2];

	add[2][0] = a[2][0] + mat_.a[2][0];
	add[2][1] = a[2][1] + mat_.a[2][1];
	add[2][2] = a[2][2] + mat_.a[2][2];
}

void Matrix3::SubtractMatrices(Matrix3 mat_)
{
	subtract[0][0] = a[0][0] - mat_.a[0][0];
	subtract[0][1] = a[0][1] - mat_.a[0][1];
	subtract[0][2] = a[0][2] - mat_.a[0][2];

	subtract[1][0] = a[1][0] - mat_.a[1][0];
	subtract[1][1] = a[1][1] - mat_.a[1][1];
	subtract[1][2] = a[1][2] - mat_.a[1][2];

	subtract[2][0] = a[2][0] - mat_.a[2][0];
	subtract[2][1] = a[2][1] - mat_.a[2][1];
	subtract[2][2] = a[2][1] - mat_.a[2][2];
}

void Matrix3::MultiplyMatrices(Matrix3 mat_)
{
	multiply[0][0] = a[0][0] * mat_.a[0][0];
	multiply[0][1] = a[0][1] * mat_.a[0][1];
	multiply[0][2] = a[0][2] * mat_.a[0][2];

	multiply[1][0] = a[1][0] * mat_.a[1][0];
	multiply[1][1] = a[1][1] * mat_.a[1][1];
	multiply[1][2] = a[1][2] * mat_.a[1][2];

	multiply[2][0] = a[2][0] * mat_.a[2][0];
	multiply[2][1] = a[2][1] * mat_.a[2][1];
	multiply[2][2] = a[2][1] * mat_.a[2][2];
}

void Matrix3::DivideMatrices(Matrix3 mat_)
{
	divide[0][0] = a[0][0] / mat_.a[0][0];
	divide[0][1] = a[0][1] / mat_.a[0][1];
	divide[0][2] = a[0][2] / mat_.a[0][2];

	divide[1][0] = a[1][0] / mat_.a[1][0];
	divide[1][1] = a[1][1] / mat_.a[1][1];
	divide[1][2] = a[1][2] / mat_.a[1][2];

	divide[2][0] = a[2][0] / mat_.a[2][0];
	divide[2][1] = a[2][1] / mat_.a[2][1];
	divide[2][2] = a[2][1] / mat_.a[2][2];
}