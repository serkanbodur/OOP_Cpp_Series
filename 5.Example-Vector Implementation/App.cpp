#include<iostream>
using namespace std;
#include "Vector.h"
/**
* \brief Enter 3 input values
*/
void TEST_Input(Vector& vector)
{
	cout << "+------------+" << endl
		<< "| INPUT TEST |" << endl
		<< "+------------+" << endl;
	cin >> vector;
}
/**
* \brief Print vector
*/
void TEST_Output(Vector& vector)
{
	cout << "+-------------+" << endl
		<< "| OUTPUT TEST |" << endl
		<< "+-------------+" << endl;
	cout << vector << endl;

}
/**
* \brief Print original vector and after copy operate
*/
void TEST_CopyConstructor(Vector& vector)
{
	cout << "+-----------------------+" << endl
		<< "| COPY CONSTRUCTOR TEST |" << endl
		<< "+-----------------------+" << endl;
	Vector copy_vector(vector);
	cout << "Original Vector : " << vector << endl << "Copy Vector : " << copy_vector << endl;
}
/**
* \brief Print original vector and after assignment operate
*/
void TEST_Assignment(Vector& vector)
{
	cout << "+-----------------+" << endl
		<< "| ASSIGNMENT TEST |" << endl
		<< "+-----------------+" << endl;
	Vector copy_vector;
	copy_vector = vector;
	cout << "Original Vector : " << vector << endl << "Assignment Copy Vector : " << copy_vector << endl;
}
/**
* \brief Print Two vector are equal or not
*/
void TEST_Equal(Vector& vector1, Vector& vector2)
{
	cout << "+------------+" << endl
		<< "| EQUAL TEST |" << endl
		<< "+------------+" << endl;
	if (vector1 == vector2)
	{
		cout << vector1 << " is equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not equal to " << vector2 << endl;
	}
}
/**
* \brief Print Two vector are equal or not
*/
void TEST_Not_Equal(Vector& vector1, Vector& vector2)
{
	cout << "+-------------------+" << endl
		<< "|    NOT EQUAL TEST |" << endl
		<< "+-------------------+" << endl;
	if (vector1 != vector2)
	{
		cout << vector1 << " is equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not equal to " << vector2 << endl;
	}
}
/**
* \brief Print if vector1 less or is not less than vector2
*/
void TEST_LESS_THAN(Vector& vector1, Vector& vector2)
{
	cout << "+----------------+" << endl
		<< "| LESS THAN TEST |" << endl
		<< "+----------------+" << endl;
	if (vector1 < vector2)
	{
		cout << vector1 << " is less than " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not less than " << vector2 << endl;
	}
}
/**
* \brief Print if vector1 less than equal vector2
*/
void TEST_LESS_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
	cout << "+------------------------+" << endl
		<< "| LESS THAN OR EQUAL TEST |" << endl
		<< "+-------------------------+" << endl;
	if (vector1 <= vector2)
	{
		cout << vector1 << " is less than or equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not less than or equal to " << vector2 << endl;
	}
}
/**
* \brief Print if vector1 greater than vector2
*/
void TEST_GREATER_THAN(Vector& vector1, Vector& vector2)
{
	cout << "+------------------+" << endl
		<< "| GREATER THAN TEST |" << endl
		<< "+-------------------+" << endl;
	if (vector1 > vector2)
	{
		cout << vector1 << " is greater than " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not greater than " << vector2 << endl;
	}
}
/**
* \brief Print if vector1 greater than or equal vector2
*/
void TEST_GREATER_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
	cout << "+---------------------------+" << endl
		<< "| GREATER THAN OR EQUAL TEST |" << endl
		<< "+----------------------------+" << endl;
	if (vector1 >= vector2)
	{
		cout << vector1 << " is greater or equal than to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not greater than or equal to " << vector2 << endl;
	}
}
/**
* \brief Print vector subscription
*/
void TEST_Subscription(Vector& vector, int i, double newValue)
{
	cout << "+-------------------+" << endl
		<< "| SUBSCRIPTION TEST |" << endl
		<< "+-------------------+" << endl;
	cout << "Vector itself : " << vector << endl;
	cout << "Get vector[" << i << "] = " << vector[i] << endl;
	vector[i] = newValue;
	cout << "Set vector" << i << " to " << newValue << " then vector" << i << " = " << vector[i] << endl;
}
/**
* \brief Print addition operation vector1 and vector2
*/
void TEST_Addition(Vector& vector1, Vector& vector2)
{
	cout << "+---------------+" << endl
		<< "| ADDITION TEST |" << endl
		<< "+---------------+" << endl;
	Vector result = vector1 + vector2;
	cout << vector1 << " + " << vector2 << " = " << result << endl;
}
/**
* \brief Print addition and result operation vector1 and vector2
*/
void TEST_AdditionOver(Vector vector1, Vector vector2)
{
	cout << "+--------------------+" << endl
		<< "| ADDITION OVER TEST |" << endl
		<< "+--------------------+" << endl;
	cout << "Vector 1 Before Addition over: " << vector1 << endl;
	vector1 += vector2;
	cout << "Vector 1 After Addition over: " << vector1 << endl;
}
/**
* \brief Print vector1 subtract operation vector2
*/
void TEST_Substraction(Vector& vector1, Vector& vector2)
{
	cout << "+--------------------+" << endl
		<< "| SUBSTRACTION TEST |" << endl
		<< "+--------------------+" << endl;
	cout << vector1 << " - " << vector2 << " = " << vector1 - vector2 << endl;
}
/**
* \brief Print vector1 subtract and result operation vector2
*/
void TEST_SubstractionOver(Vector vector1, Vector vector2)
{
	cout << "+--------------------+" << endl
		<< "| SUBSTRACTION OVER TEST  |" << endl
		<< "+-------------------------+" << endl;

	cout << "Vector 1 Before Addition over: " << vector1 << endl;
	vector1 -= vector2;
	cout << "Vector 1 After Addition over: " << vector1 << endl;
}
/**
* \brief Print vector1 multiply operation vector2
*/
void TEST_DotProduct(Vector& vector1, Vector& vector2)
{
	cout << "+--------------------+" << endl
		<< "|  DOT PRODUCT TEST   |" << endl
		<< "+--------------------+" << endl;

	cout << vector1 << " * " << vector2 << " = " << vector1*vector2 << endl;
}
/**
* \brief Print vector1 multiply const value
*/
void TEST_Constant_Multiplication(Vector& vector1, double constant_value)
{
	cout << "+-----------------------------+" << endl
		<< "| CONSTANT MULTIPLICATIN TEST  |" << endl
		<< "+-----------------------------+" << endl;

	cout << vector1 << " * " << constant_value << " = " << vector1*constant_value << endl;
}
/**
* \brief Print vector1 multiply and result const value
*/
void TEST_Constant_MultiplicationOver(Vector vector, double constant_value)
{
	cout << "+-----------------------------+" << endl
		<< "| CONSTANT MULTIPLICATIN OVER |" << endl
		<< "+-----------------------------+" << endl;
	cout << "Vector 1 Before Constant Multiplication over: " << vector << endl;
	vector *= constant_value;
	cout << "Vector 1 After Constant Multiplication over: " << vector << endl;
}
/**
* \brief Print vector1 divide vector2
*/
void TEST_Division(Vector& vector1, Vector& vector2)
{
	cout << "+----------------+" << endl
		<< "|  DIVISION TEST |" << endl
		<< "+----------------+" << endl;
	Vector sonuc;
	sonuc = vector1 / vector2;
	cout << vector1 << " / " << vector2 << " = " << sonuc << endl;
}
/**
* \brief Print vector1 divide and result vector2
*/
void TEST_DivisionOver(Vector vector1, Vector vector2)
{
	cout << "+--------------------+" << endl
		<< "|  DIVISION OVER TEST |" << endl
		<< "+---------------------+" << endl;
	cout << "Vector 1 Before Constant Division over: " << vector1 << endl;
	vector1 /= vector2;
	cout << "Vector 1 After Constant Division over: " << vector1 << endl;
}
/**
* \brief Print vector1 const value
*/
void TEST_Constant_Division(Vector& vector1, double constant_value)
{
	cout << "+------------------------+" << endl
		<< "|  CONSTANT DIVISION TEST |" << endl
		<< "+-------------------------+" << endl;

	cout << vector1 << " / " << constant_value << " = " << vector1 / constant_value << endl;
}
/**
* \brief Print vector1 divide and resullt const value
*/
void TEST_Constant_DivisionOver(Vector vector, double constant_value)
{
	cout << "+------------------------------+" << endl
		<< "|	CONSTANT DIVISION OVER TEST |" << endl
		<< "+-------------------------------+" << endl;
	cout << "Vector 1 Before Constant Division over: " << vector << endl;
	vector /= constant_value;
	cout << "Vector 1 After Constant Division over: " << vector << endl;
}
/**
* \brief Print magnitude of vector1
*/
void TEST_Magnitude(Vector& vector1)
{
	cout << "+----------------+" << endl
		<< "| MAGNITUDE TEST |" << endl
		<< "+----------------+" << endl;
	double result = vector1();
	cout << "MAG( " << vector1 << " ) = " << result << endl;
}
/**
* \brief Inverse of vector1
*/
void TEST_InverseDirection(Vector vector)
{
	cout << "+-------------------+" << endl
		<< "| INVERSE DIRECTION |" << endl
		<< "+-------------------+" << endl;
	cout << "Original Vector: " << vector << endl;
	cout << "Inversed Vector: " << !vector << endl;
}

int main()
{

	double firstTestData[]{ 1.2, 2.4, 3.6 };
	double secondTestData[]{ 1.8, 2.6, 3.4 };

	Vector v1(3);
	Vector v2(firstTestData, 3);
	Vector v3(firstTestData, 3);
	Vector v4(secondTestData, 3);
	TEST_Input(v1);
	TEST_Output(v1);
	TEST_CopyConstructor(v1);
	TEST_Assignment(v1);

	TEST_Equal(v2, v3);

	TEST_Not_Equal(v3, v4);

	TEST_LESS_THAN(v1, v2);
	TEST_LESS_THAN_OR_EQUAL(v2, v3);
	TEST_GREATER_THAN(v1, v2);
	TEST_GREATER_THAN_OR_EQUAL(v2, v3);
	TEST_Subscription(v1, 1, 5.3);
	TEST_Addition(v1, v2);
	TEST_AdditionOver(v1, v2);

	TEST_Substraction(v1, v2);


	TEST_SubstractionOver(v1, v2);
	TEST_DotProduct(v1, v2);
	TEST_Constant_Multiplication(v1, 2);
	TEST_Constant_MultiplicationOver(v1, 2);
	TEST_Division(v1, v2);
	TEST_DivisionOver(v1, v2);
	TEST_Constant_Division(v1, 2);
	TEST_Constant_DivisionOver(v1, 2);
	TEST_Magnitude(v1);
	TEST_InverseDirection(v1);

	system("pause");
	return 0;
}