#pragma once

#include <iostream>
#include <math.h>

class Vector3
{
public:
	Vector3();
	Vector3(float x, float y, float z);
	~Vector3();

	// Return the square length of a vector
	float			SquareMagnitude() const;
	// Return the length of the vector
	float			Magnitude();

	static float	Dot(Vector3 const & lhs, Vector3 const & rhs);
	static Vector3	Multiply(Vector3 const & lhs, float const & rhs);

	Vector3			operator+(Vector3 const & rhs) const;
	Vector3			operator-(Vector3 const & rhs) const;
	Vector3			operator*(float const & rhs) const;

	float			X;
	float			Y;
	float			Z;

private:
	bool			_isMagnitudeSet;
	float			_magnitude;

};

Vector3				operator*(float lhs, Vector3 const & rhs);

// Easy std output
std::ostream &		operator<<(std::ostream & o, Vector3 const & rhs);