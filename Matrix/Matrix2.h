#pragma once
class Matrix2
{
public:
	Matrix2(float a_, float b_, float c_, float d_);
	~Matrix2();

	float Determinant();
	void Transpose(Matrix2 mat_);
	void MinorMatrix();
	void AdjugateMatrix();
	void Inverse();

	void AddMatrices(Matrix2 mat_);
	void SubtractMatrices(Matrix2 mat_);
	void MultiplyMatrices(Matrix2 mat_);
	void DivideMatrices(Matrix2 mat_);

	float a[2][2], transpose[2][2], inverse[2][2];
	float add[2][2], subtract[2][2], multiply[2][2], divide[2][2];

private:
	float determinant;
};

