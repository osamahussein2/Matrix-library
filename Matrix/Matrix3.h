#pragma once
class Matrix3
{
public:
	Matrix3(float a_, float b_, float c_, float d_, float e_, float f_, float g_, float h_, float i_);
	~Matrix3();

	float Determinant();
	void Transpose(Matrix3 mat_);
	void MinorMatrix();
	void AdjugateMatrix();
	void Inverse();

	void AddMatrices(Matrix3 mat_);
	void SubtractMatrices(Matrix3 mat_);
	void MultiplyMatrices(Matrix3 mat_);
	void DivideMatrices(Matrix3 mat_);

	float a[3][3], transpose[3][3], minor[3][3], adjugate[3][3], inverse[3][3];
	float add[3][3], subtract[3][3], multiply[3][3], divide[3][3];

private:
	float determinant;
};

