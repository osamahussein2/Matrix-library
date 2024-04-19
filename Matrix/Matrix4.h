#pragma once
class Matrix4
{
public:
	Matrix4(float a_, float b_, float c_, float d_, float e_, float f_, float g_, float h_, float i_, float j_, float k_,
		float l_, float m_, float n_, float o_, float p_);
	~Matrix4();

	float Determinant();
	void Transpose(Matrix4 mat_);
	void MinorMatrix();
	void AdjugateMatrix();
	void Inverse();

	void AddMatrices(Matrix4 mat_);
	void SubtractMatrices(Matrix4 mat_);
	void MultiplyMatrices(Matrix4 mat_);
	void DivideMatrices(Matrix4 mat_);

	float a[4][4], transpose[4][4], adjugate[4][4], inverse[4][4];
	float add[4][4], subtract[4][4], multiply[4][4], divide[4][4];

private:
	float determinant;
};

