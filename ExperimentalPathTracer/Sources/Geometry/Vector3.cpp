#include "../../Headers/Geometry/Vector3.hpp"

Vector3::Vector3() : _isMagnitudeSet(false)
{
}

Vector3::Vector3(const float x, const float y, const float z) : _isMagnitudeSet(false)
{
	this->X = x;
	this->Y = y;
	this->Z = z;
}

Vector3::~Vector3()
{
}

float Vector3::SquareMagnitude() const
{
	return this->X * this->X + this->Y * this->Y + this->Z * this->Z;
}

float Vector3::Magnitude()
{
	// We only calcul one time the square
	if (!_isMagnitudeSet)
	{
		_isMagnitudeSet = true;
		_magnitude = sqrt(SquareMagnitude());
	}
	return _magnitude;
}

float Vector3::Dot(Vector3 const & lhs, Vector3 const & rhs)
{
	return lhs.X * rhs.X + lhs.Y * rhs.Y + lhs.Z * rhs.Z;
}

Vector3 Vector3::operator+(Vector3 const & rhs) const
{
	return Vector3(this->X + rhs.X, this->Y + rhs.Y, this->Z + rhs.Z);
}

Vector3 Vector3::operator-(Vector3 const & rhs) const
{
	return Vector3(this->X - rhs.X, this->Y - rhs.Y, this->Z - rhs.Z);
}

Vector3 Vector3::operator*(float const & rhs) const
{
	return Multiply(*this, rhs);
}

Vector3 operator*(float lhs, Vector3 const & rhs)
{
	return Vector3::Multiply(rhs, lhs);
}

Vector3 Vector3::Multiply(Vector3 const & lhs, float const & rhs)
{
	return Vector3(lhs.X * rhs, lhs.Y * rhs, lhs.Z * rhs);
}


std::ostream & operator<<(std::ostream & o, Vector3 const & rhs)
{
	o << "Vector3(" << rhs.X << ", " << rhs.Y << ", " << rhs.Z << ")";
	return o;
}
