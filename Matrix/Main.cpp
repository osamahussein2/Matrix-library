#include <iostream>
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"

int main()
{
	Matrix2 a(3.0f, 4.0f, 1.0f, 6.0f);
	Matrix2 b(2.0f, 1.0f, 4.0f, 4.0f);

	std::cout << "Matrix2 a =	" << a.a[0][0] << "	" << a.a[0][1] << "\n		" << a.a[1][0] << "	" << a.a[1][1] << std::endl;
	std::cout << "\nMatrix2 b =	" << b.a[0][0] << "	" << b.a[0][1] << "\n		" << b.a[1][0] << "	" << b.a[1][1] << std::endl;

	std::cout << "\nThe determinant of a =	" << a.Determinant() << std::endl;

	a.Transpose(a);

	std::cout << "Tranpose Matrix2 a =	" << a.transpose[0][0] << "	" << a.transpose[0][1] << "\n			" 
		<< a.transpose[1][0] << "	" << a.transpose[1][1] << "\n" << std::endl;

	a.Inverse();

	std::cout << "Inverse Matrix2 a =	" << a.inverse[0][0] << "	" << a.inverse[0][1] << "\n			" 
		<< a.inverse[1][0] << "	" << a.inverse[1][1] << "\n" << std::endl;

	a.AddMatrices(b);

	std::cout << "Addition Matrix2 a =	" << a.add[0][0] << "	" << a.add[0][1] << "\n			" << a.add[1][0] << "	"
		<< a.add[1][1] << "\n" << std::endl;

	a.SubtractMatrices(b);

	std::cout << "Subtraction Matrix2 a =		" << a.subtract[0][0] << "	" << a.subtract[0][1] << "\n				" 
		<< a.subtract[1][0] << "	" << a.subtract[1][1] << "\n" << std::endl;

	a.MultiplyMatrices(b);

	std::cout << "Multiplication Matrix2 a =	" << a.multiply[0][0] << "	" << a.multiply[0][1] << "\n				" 
		<< a.multiply[1][0] << "	" << a.multiply[1][1] << "\n" << std::endl;

	a.DivideMatrices(b);

	std::cout << "Division Matrix2 a =	" << a.divide[0][0] << "	" << a.divide[0][1] << "\n			" 
		<< a.divide[1][0] << "	" << a.divide[1][1] << std::endl;

	Matrix3 c(1.0f, 2.0f, 3.0f, 0.0f, 1.0f, 4.0f, 5.0f, 6.0f, 0.0f);
	Matrix3 d(1.0f, 2.0f, 3.0f, 0.0f, 1.0f, 4.0f, 5.0f, 6.0f, 0.0f);

	std::cout << "Matrix3 c =	" << c.a[0][0] << "	" << c.a[0][1] << "	" << c.a[0][2] << "\n		"
		<< c.a[1][0] << "	" << c.a[1][1] << "	" << c.a[1][2] << "\n		"
		<< c.a[2][0] << "	" << c.a[2][1] << "	" << c.a[2][2] << "\n" << std::endl;

	std::cout << "\nMatrix3 d =	" << d.a[0][0] << "	" << d.a[0][1] << "	" << d.a[0][2] << "\n		"
		<< d.a[1][0] << "	" << d.a[1][1] << "	" << d.a[1][2] << "\n		"
		<< d.a[2][0] << "	" << d.a[2][1] << "	" << d.a[2][2] << "\n" << std::endl;

	std::cout << "\nThe determinant of c =	" << c.Determinant() << std::endl;

	c.Transpose(c);

	std::cout << "Transpose Matrix3 c =	" << c.transpose[0][0] << "	" << c.transpose[0][1] << "	" << c.transpose[0][2] << "\n			"
		<< c.transpose[1][0] << "	" << c.transpose[1][1] << "	" << c.transpose[1][2] << "\n			" 
		<< c.transpose[2][0] << "	" << c.transpose[2][1] << "	" << c.transpose[2][2] << "\n" << std::endl;

	c.MinorMatrix();

	std::cout << "Minor Matrix3 c =	" << c.minor[0][0] << "	" << c.minor[0][1] << "	" << c.minor[0][2] << "\n			"
		<< c.minor[1][0] << "	" << c.minor[1][1] << "	" << c.minor[1][2] << "\n			"
		<< c.minor[2][0] << "	" << c.minor[2][1] << "	" << c.minor[2][2] << "\n" << std::endl;

	c.AdjugateMatrix();

	std::cout << "Adjugate Matrix3 c =	" << c.adjugate[0][0] << "	" << c.adjugate[0][1] << "	" << c.adjugate[0][2] << "\n			"
		<< c.adjugate[1][0] << "	" << c.adjugate[1][1] << "	" << c.adjugate[1][2] << "\n			"
		<< c.adjugate[2][0] << "	" << c.adjugate[2][1] << "	" << c.adjugate[2][2] << "\n" << std::endl;

	c.Inverse();

	std::cout << "Inverse Matrix3 c =	" << c.inverse[0][0] << "	" << c.inverse[0][1] << "	" << c.inverse[0][2] << "\n			"
		<< c.inverse[1][0] << "	" << c.inverse[1][1] << "	" << c.inverse[1][2] << "\n			"
		<< c.inverse[2][0] << "	" << c.inverse[2][1] << "	" << c.inverse[2][2] << "\n" << std::endl;

	c.AddMatrices(d);

	std::cout << "Addition Matrix3 c =	" << c.add[0][0] << "	" << c.add[0][1] << "	" << c.add[0][2] << "\n			"
		<< c.add[1][0] << "	" << c.add[1][1] << "	" << c.add[1][2] << "\n			"
		<< c.add[2][0] << "	" << c.add[2][1] << "	" << c.add[2][2] << "\n" << std::endl;

	c.SubtractMatrices(d);

	std::cout << "Subtraction Matrix3 c =		" << c.subtract[0][0] << "	" << c.subtract[0][1] << "	" << c.subtract[0][2] << "\n				"
		<< c.subtract[1][0] << "	" << c.subtract[1][1] << "	" << c.subtract[1][2] << "\n				"
		<< c.subtract[2][0] << "	" << c.subtract[2][1] << "	" << c.subtract[2][2] << "\n" << std::endl;

	c.MultiplyMatrices(d);

	std::cout << "Multiplication Matrix3 c =	" << c.multiply[0][0] << "	" << c.multiply[0][1] << "	" << c.multiply[0][2] << "\n				"
		<< c.multiply[1][0] << "	" << c.multiply[1][1] << "	" << c.multiply[1][2] << "\n				"
		<< c.multiply[2][0] << "	" << c.multiply[2][1] << "	" << c.multiply[2][2] << "\n" << std::endl;

	c.DivideMatrices(d);

	std::cout << "Division Matrix3 c =	" << c.divide[0][0] << "	" << c.divide[0][1] << "	" << c.divide[0][2] << "\n			"
		<< c.divide[1][0] << "	" << c.divide[1][1] << "	" << c.divide[1][2] << "\n			"
		<< c.divide[2][0] << "	" << c.divide[2][1] << "	" << c.divide[2][2] << "\n" << std::endl;

	Matrix4 e(1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f);
	Matrix4 f(1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f);

	std::cout << "Matrix4 e =	" << e.a[0][0] << "	" << e.a[0][1] << "	" << e.a[0][2] << "	" << e.a[0][3] << "\n		"
		<< e.a[1][0] << "	" << e.a[1][1] << "	" << e.a[1][2] << "	" << e.a[1][3] << "\n		"
		<< e.a[2][0] << "	" << e.a[2][1] << "	" << e.a[2][2] << "	" << e.a[2][3] << "\n		"
		<< e.a[3][0] << "	" << e.a[3][1] << "	" << e.a[3][2] << "	" << e.a[3][3] << "\n" << std::endl;

	std::cout << "\nMatrix4 f =	" << f.a[0][0] << "	" << f.a[0][1] << "	" << f.a[0][2] << "	" << f.a[0][3] << "\n		"
		<< f.a[1][0] << "	" << f.a[1][1] << "	" << f.a[1][2] << "	" << f.a[1][3] << "\n		"
		<< f.a[2][0] << "	" << f.a[2][1] << "	" << f.a[2][2] << "	" << f.a[2][3] << "\n		"
		<< f.a[3][0] << "	" << f.a[3][1] << "	" << f.a[3][2] << "	" << f.a[3][3] << "\n" << std::endl;

	std::cout << "\nThe determinant of e =	" << e.Determinant() << std::endl;

	e.Transpose(e);

	std::cout << "Transpose Matrix4 e =	" << e.transpose[0][0] << "	" << e.transpose[0][1] << "	" << e.transpose[0][2] << "	" << e.transpose[0][3] << "\n			"
		<< e.transpose[1][0] << "	" << e.transpose[1][1] << "	" << e.transpose[1][2] << "	" << e.transpose[1][3] << "\n			"
		<< e.transpose[2][0] << "	" << e.transpose[2][1] << "	" << e.transpose[2][2] << "	" << e.transpose[2][3] << "\n			"
		<< e.transpose[3][0] << "	" << e.transpose[3][1] << "	" << e.transpose[3][2] << "	" << e.transpose[3][3] << "\n" << std::endl;

	e.AdjugateMatrix();

	std::cout << "Adjugate Matrix4 e =	" << e.adjugate[0][0] << "	" << e.adjugate[0][1] << "	" << e.adjugate[0][2] << "	" << e.adjugate[0][3] << "\n			"
		<< e.adjugate[1][0] << "	" << e.adjugate[1][1] << "	" << e.adjugate[1][2] << "	" << e.adjugate[1][3] << "\n			"
		<< e.adjugate[2][0] << "	" << e.adjugate[2][1] << "	" << e.adjugate[2][2] << "	" << e.adjugate[2][3] << "\n			" 
		<< e.adjugate[3][0] << "	" << e.adjugate[3][1] << "	" << e.adjugate[3][2] << "	" << e.adjugate[3][3] << "\n" << std::endl;

	e.Inverse();

	std::cout << "Inverse Matrix4 e =	" << e.inverse[0][0] << "	" << e.inverse[0][1] << "	" << e.inverse[0][2] << "	" << e.inverse[0][3] << "\n			"
		<< e.inverse[1][0] << "	" << e.inverse[1][1] << "	" << e.inverse[1][2] << "	" << e.inverse[1][3] << "\n			"
		<< e.inverse[2][0] << "	" << e.inverse[2][1] << "	" << e.inverse[2][2] << "	" << e.inverse[2][3] << "\n			" 
		<< e.inverse[3][0] << "	" << e.inverse[3][1] << "	" << e.inverse[3][2] << "	" << e.inverse[3][3] << "\n" << std::endl;

	e.AddMatrices(f);

	std::cout << "Addition Matrix4 e =	" << e.add[0][0] << "	" << e.add[0][1] << "	" << e.add[0][2] << "	" << e.add[0][3] << "\n			"
		<< e.add[1][0] << "	" << e.add[1][1] << "	" << e.add[1][2] << "	" << e.add[1][3] << "\n			"
		<< e.add[2][0] << "	" << e.add[2][1] << "	" << e.add[2][2] << "	" << e.add[2][3] << "\n			" 
		<< e.add[3][0] << "	" << e.add[3][1] << "	" << e.add[3][2] << "	" << e.add[3][3] << "\n" << std::endl;

	e.SubtractMatrices(f);

	std::cout << "Subtraction Matrix4 e =		" << e.subtract[0][0] << "	" << e.subtract[0][1] << "	" << e.subtract[0][2] << "	" << e.subtract[0][3] << "\n				"
		<< e.subtract[1][0] << "	" << e.subtract[1][1] << "	" << e.subtract[1][2] << "	" << e.subtract[1][3] << "\n				"
		<< e.subtract[2][0] << "	" << e.subtract[2][1] << "	" << e.subtract[2][2] << "	" << e.subtract[2][3] << "\n				"
		<< e.subtract[3][0] << "	" << e.subtract[3][1] << "	" << e.subtract[3][2] << "	" << e.subtract[3][3] << "\n" << std::endl;

	e.MultiplyMatrices(f);

	std::cout << "Multiplication Matrix4 e =	" << e.multiply[0][0] << "	" << e.multiply[0][1] << "	" << e.multiply[0][2] << "	" << e.multiply[0][3] << "\n				"
		<< e.multiply[1][0] << "	" << e.multiply[1][1] << "	" << e.multiply[1][2] << "	" << e.multiply[1][3] << "\n				"
		<< e.multiply[2][0] << "	" << e.multiply[2][1] << "	" << e.multiply[2][2] << "	" << e.multiply[2][3] << "\n				"
		<< e.multiply[3][0] << "	" << e.multiply[3][1] << "	" << e.multiply[3][2] << "	" << e.multiply[3][3] << "\n" << std::endl;

	e.DivideMatrices(f);

	std::cout << "Division Matrix4 e =	" << e.divide[0][0] << "	" << e.divide[0][1] << "	" << e.divide[0][2] << "	" << e.divide[0][3] << "\n			"
		<< e.divide[1][0] << "	" << e.divide[1][1] << "	" << e.divide[1][2] << "	" << e.divide[1][3] << "\n			"
		<< e.divide[2][0] << "	" << e.divide[2][1] << "	" << e.divide[2][2] << "	" << e.divide[2][3] << "\n			"
		<< e.divide[3][0] << "	" << e.divide[3][1] << "	" << e.divide[3][2] << "	" << e.divide[3][3] << "\n" << std::endl;

	return 0;
}