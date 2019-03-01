#pragma once
#include<iostream>
using namespace std;
/**
* \brief A Class of Vector
* \author Serkan Bodur
*
*
*
*/
class Vector {
	/**
	* \brief operator << function
	* \param Vector(must be unique)
	* \param ostream
	*/
	friend ostream &operator<<(ostream &, const Vector &);
	/**
	* \brief operator >> function
	* \param Vector(must be unique)
	* \param istream
	*/
	friend istream &operator >> (istream &, Vector &);
public:
	/**
	* \brief default constructor
	*/
	Vector(int = 3);
	/**
	* \brief constructor
	* \param data
	*/
	Vector(double data[], int);
	/**
	* \brief constructor
	*/
	Vector(const Vector&);
	/**
	* \brief destructor
	*/
	virtual ~Vector();
	/**
	* \brief return dimension value
	*/
	int getDimension();
	/**
	* \brief Result operator of two vectors any operation(such as sum,divide,multiply etc)
	*/
	const Vector&operator=(const Vector &);
	/**
	* \brief Two vectors are equal each other control
	*/
	bool operator==(const Vector &);
	/**
	* \brief Two vectors are not equal each other control
	*/
	bool operator!=(const Vector &);
	/**
	* \brief If this vector smaller than const Vector
	*/
	bool operator<(const Vector &);
	/**
	* \brief If this vector smaller than or equal const Vector
	*/
	bool operator<=(const Vector &);
	/**
	* \brief If this vector greater than const Vector
	*/
	bool operator>(const Vector &);
	/**
	* \brief If this vector greater than or equal const Vector
	*/
	bool operator>=(const Vector &);
	/**
	* \brief operator[]
	*/
	double &operator[](int);
	/**
	* \brief operator[](must bw unique)
	*/
	const double &operator[](int)const;
	/**
	* \brief sum operator
	*/
	Vector operator+(const Vector &);
	/**
	* \brief sum and result operator
	*/
	Vector &operator+=(const Vector &);
	/**
	* \brief substraction operator
	*/
	Vector operator-(const Vector &);
	/**
	* \brief substraction and result operator
	*/
	Vector &operator-=(const Vector &);
	/**
	* \brief Two Vectors multiply operator
	*/
	double operator*(const Vector &);
	/**
	* \brief Vector and a const value multiply operator
	*/
	Vector operator*(const double);
	/**
	* \brief Vector and a const value multiply and result operator
	*/
	Vector &operator*=(const double);
	/**
	* \brief Vector divided operator
	*/
	Vector operator/(const Vector &);
	/**
	* \brief Vector divided and result operator
	*/
	Vector &operator/=(const Vector &);
	/**
	* \brief Vector and const value divided operator
	*/
	Vector operator/(const double);
	/**
	* \brief Vector and const value divided and result operator
	*/
	Vector &operator/=(const double);
	/**
	* \brief Paranthesis function
	*/
	double operator ()();
	/**
	* \brief exclamation function
	*/
	Vector &operator!();

private:
	/**
	* \brief m_data pointer
	*/
	double *m_data;
	/**
	* \brief m_dimension variable
	*/
	int m_dimension;
};
#pragma once
