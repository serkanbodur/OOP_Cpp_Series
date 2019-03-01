#include <iostream>
using namespace std;
#include<math.h>
#include"Vector.h"
/**
* \brief The function operator << for using cout operation
* \param out
* \param a(const Vector)
* \return out
*/
ostream &operator<<(ostream &out, const Vector &a)
{
	cout << "[";
	for (int i = 0;i < a.m_dimension;i++)
	{
		out << a.m_data[i];
		if (i != a.m_dimension - 1)
		{
			cout << ", ";
		}
		else
		{
			cout << " ";
		}

	}
	cout << "]";
	return out;
}
/**
* \brief The function operator >> for using cin operation
* \param in
* \param a
* \return in
*/
istream &operator >> (istream &in, Vector &a)
{
	for (int i = 0;i < a.m_dimension;i++)
	{
		in >> a.m_data[i];
	}
	return in;
}
/**
* \brief Constructor is initial value 0
* \param dimension
*/
Vector::Vector(int dimension)
{
	m_dimension = (dimension > 0 ? dimension : 3);
	m_data = new double[m_dimension];
	for (int i = 0;i < m_dimension;i++)
	{
		m_data[i] = 0;
	}

}
/**
* \brief Constructor given data appoint to m_data
* \param data[]
* \param dimension
*/
Vector::Vector(double data[], int dimension)
{
	this->m_dimension = dimension;

	m_data = new double[dimension];
	for (int i = 0;i < m_dimension;i++)
	{
		m_data[i] = data[i];
	}
}
/**
* \brief Copy Constructor
* \param copyVector
*/
Vector::Vector(const Vector&copyVector) : m_dimension(copyVector.m_dimension)
{
	m_data = new double[m_dimension];
	for (int i = 0;i < m_dimension;i++)
	{

		m_data[i] = copyVector.m_data[i];
	}
}
/**
* \brief Destructor
*/
Vector ::~Vector()
{}
/**
* \brief Function return m_dimension
* \return m_dimension
*/
int Vector::getDimension()
{
	return m_dimension;
}
/**
* \brief Function of two vector operation result (such as sum,multiply etc)
* \param copyVector
* \return *this
*/
const Vector&Vector::operator=(const Vector &copyVector)
{
	if (&copyVector != this)
	{
		if (m_dimension != copyVector.m_dimension)
		{
			delete[] m_data;
			m_dimension = copyVector.m_dimension;
			m_data = new double[m_dimension];
		}
		for (int i = 0;i < m_dimension;i++)
			m_data[i] = copyVector.m_data[i];
	}
	return *this;
}
/**
* \brief If two vectors are equal
* \param secondOperand
* \return true or false
*/
bool ::Vector::operator==(const Vector&secondOperand)
{
	if (m_dimension != secondOperand.m_dimension)
		return 0;

	for (int i = 0;i < m_dimension;i++)
		if (m_data[i] != secondOperand.m_data[i])
			return 0;

	return 1;

}
/** \brief If two vectors are not equal
* \param secondOperand
* \return true or false
*/
bool::Vector::operator!=(const Vector&secondOperand)
{
	if (m_dimension != secondOperand.m_dimension)
		return true;

	for (int i = 0;i < m_dimension;i++)
		if (m_data[i] != secondOperand.m_data[i])
			return true;

	return false;
}
/**
* \brief If first vector smaller than secondOperand vector
* \param secondOperand
* \return true or false
*/
bool::Vector::operator<(const Vector&secondOperand)
{
	if (m_dimension != secondOperand.m_dimension)
		return false;

	double sum = 0, sum2 = 0;
	for (int i = 0;i < m_dimension;i++)
	{
		sum = sum + secondOperand.m_data[i];
		sum2 = sum2 + m_data[i];
	}
	sum = sqrt(sum);
	sum2 = sqrt(sum2);
	if (sum < sum2)
		return true;

	return false;

}
/**
* \brief If first vector smaller than or equal secondOperand vector
* \param secondOperand
* \return true or false
*/
bool::Vector::operator<=(const Vector&secondOperand)
{
	if (m_dimension != secondOperand.m_dimension)
		return false;

	double sum = 0, sum2 = 0;
	for (int i = 0;i < m_dimension;i++)
	{
		sum = sum + secondOperand.m_data[i];
		sum2 = sum2 + m_data[i];
	}
	sum = sqrt(sum);
	sum2 = sqrt(sum2);
	if (sum <= sum2)
		return true;

	return false;
}
/**
* \brief If first vector greater than secondOperand vector
* \param secondOperand
* \return true or false
*/
bool::Vector::operator>(const Vector&secondOperand)
{
	if (m_dimension != secondOperand.m_dimension)
		return false;

	double sum = 0, sum2 = 0;
	for (int i = 0;i < m_dimension;i++)
	{
		sum = sum + secondOperand.m_data[i];
		sum2 = sum2 + m_data[i];
	}
	sum = sqrt(sum);
	sum2 = sqrt(sum2);
	if (sum > sum2)
		return true;

	return false;
}
/**
* \brief If first vector smaller than or equal secondOperand vector
* \param secondOperand
* \return true or false
*/
bool::Vector::operator>=(const Vector&secondOperand)
{
	if (m_dimension != secondOperand.m_dimension)
		return false;

	double sum = 0, sum2 = 0;
	for (int i = 0;i < m_dimension;i++)
	{
		sum = sum + secondOperand.m_data[i];
		sum2 = sum2 + m_data[i];
	}
	sum = sqrt(sum);
	sum2 = sqrt(sum2);
	if (sum >= sum2)
		return true;

	return false;
}
/**
* \brief if wrong index such as smaller tham zero or greater than m_dimesion
* print warning message to screen
* \param index
* \return m_data[index]
*/
double &Vector::operator[](int index)
{
	if (index < 0 || index >= m_dimension)
	{
		cout << "Error!" << index << "out of range" << endl;
		exit(1);

	}
	return m_data[index];
}
/**
* \brief If const value wrong index such as smaller tham zero or greater than m_dimesion
* print warning message in screen
* \param index
* \return m_data[index]
*/
const double &Vector::operator[](int index)const
{
	if (index < 0 || index >= m_dimension)
	{
		cout << "Error!" << index << "out of range" << endl;
		exit(1);

	}
	return m_data[index];
}
/**
* \brief Sum operator for two vectors
* \param secondOperand
* \return *tmp
*/
Vector Vector::operator+(const Vector &secondOperand)
{
	Vector *tmp;
	tmp = new Vector[m_dimension];
	for (int i = 0;i < m_dimension;i++)
		tmp[i] = m_data[i] + secondOperand.m_data[i];

	return *tmp;
}
/**
* \brief Sum and result operator for two vectors
* \param secondOperand
* \return *this
*/
Vector &Vector::operator+=(const Vector &secondOperand)
{
	for (int i = 0;i < m_dimension;i++)
	{
		m_data[i] += secondOperand.m_data[i];
	}
	return *this;
}
/**
* \brief substraction function for two vectors
* \param secondOperand
* \return *tmp
*/
Vector Vector::operator-(const Vector &secondOperand)
{
	Vector *tmp;
	tmp = new Vector[m_dimension];
	for (int i = 0;i < m_dimension;i++)
		tmp[i] = m_data[i] - secondOperand.m_data[i];

	return *tmp;
}
/**
* \brief substraction and result function for two vectors
* \param secondOperand
* \return *this
*/
Vector &Vector::operator-=(const Vector &secondOperand)
{
	for (int i = 0;i < m_dimension;i++)
	{
		m_data[i] -= secondOperand.m_data[i];
	}
	return *this;
}
/**
* \brief Multiply function for two vectors
* \param secondOperand
* \return sum
*/
double Vector::operator*(const Vector &secondOperand)
{
	double sum = 0;
	for (int i = 0;i < m_dimension;i++)
	{
		sum = sum + (m_data[i] + secondOperand.m_data[i]);
	}
	sum = sqrt(sum);
	return sum;
}
/**
* \brief Multiply function for Vector and const value
* \param multiplier
* \return *tmp
*/
Vector Vector::operator*(const double multiplier)
{
	Vector *tmp;
	tmp = new Vector[m_dimension];
	for (int i = 0;i < m_dimension;i++)
	{
		tmp[i] = m_data[i] * multiplier;
	}
	return *tmp;
}
/**
* \brief Multiply and result function for Vector and const value
* \param multiplier
* \return *this
*/
Vector &Vector::operator*=(const double multiplier)
{
	for (int i = 0;i < m_dimension;i++)
	{
		m_data[i] *= multiplier;
	}
	return *this;
}
/** \brief Divided function for two vectors
* \param secondOperand
* \return *tmp
*/
Vector Vector::operator/(const Vector &secondOperand)
{
	Vector *tmp;
	tmp = new Vector[m_dimension];

	for (int i = 0;i < m_dimension;i++)
		tmp[i] = m_data[i] / secondOperand.m_data[i];

	return *tmp;
}
/**
* \brief divided and result function for two vectors
* \param secondOperand
* \return *this
*/
Vector &Vector::operator/=(const Vector &secondOperand)
{
	for (int i = 0;i < m_dimension;i++)
		m_data[i] /= secondOperand.m_data[i];

	return *this;
}
/**
* \brief divided function for vector and const value
* \param divider
* \return *tmp
*/
Vector Vector::operator/(const double divider)
{
	Vector *tmp;
	tmp = new Vector[m_dimension];
	for (int i = 0;i < m_dimension;i++)
	{
		tmp[i] = m_data[i] / divider;
	}
	return *tmp;
}
/**
* \brief divided and result function for vector and const value
* \param divider
* \return *this
*/
Vector &Vector::operator/=(const double divider)
{
	for (int i = 0;i < m_dimension;i++)
	{
		m_data[i] /= divider;
	}
	return *this;
}
/**
* \brief Calculate vector magnitude
* \return x
*/
double Vector::operator ()()
{
	double x = 0;
	for (int i = 0;i < m_dimension;i++)
	{
		x += pow(m_data[i], 2);
	}
	x = sqrt(x);
	return x;
}
/**
* \brief Inverse the vector
* \return *inverse
*/
Vector &Vector::operator!()
{
	Vector *inverse;
	inverse = new Vector[m_dimension];

	for (int i = 0;i < m_dimension;i++)
		inverse->m_data[i] = -1 * (m_data[i]);

	return *inverse;
}

