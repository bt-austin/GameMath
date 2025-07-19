#ifndef VECTOR3_HPP
#define VECTOR3_HPP

//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <GameMath/Angles/Degree.hpp>
#include <GameMath/Angles/Radian.hpp>

//==========================================================================//
// TYPES																	//
//==========================================================================//

struct Vector3
{
public: // CONSTRUCTORS

	constexpr inline Vector3()
	{
		x = y = z = 0.0f;
	}

	constexpr inline Vector3(const Degree& x, const Degree& y, const Degree& z)
	{
		this->x = x.x;
		this->y = y.x;
		this->z = z.x;
	}

	constexpr inline Vector3(const Vector3& vector3)
	{
		this->x = vector3.x;
		this->y = vector3.y;
		this->z = vector3.z;
	}

	constexpr inline Vector3(const Radian& x, const Radian& y, const Radian& z)
	{
		this->x = x.x;
		this->y = y.x;
		this->z = z.x;
	}

public: // OPERATOR OVERLOADS

	constexpr inline Vector3& operator=(const Degree& default_vector_set)
	{
		x = DegreesToRadians(default_vector_set.x);
		y = DegreesToRadians(default_vector_set.x);
		z = DegreesToRadians(default_vector_set.x);
		return (*this);
	}

	constexpr inline Vector3& operator=(const Vector3& vector3)
	{
		x = vector3.x;
		y = vector3.y;
		z = vector3.z;
		return (*this);
	}

	constexpr inline Vector3 operator+(const Vector3& vector3) const
	{
		return { x + vector3.x, y + vector3.y, z + vector3.z };
	}

	constexpr inline Vector3 operator-(const Vector3& vector3) const
	{
		return { x - vector3.x, y - vector3.y, z - vector3.z };
	}

	constexpr inline Vector3 operator*(const Vector3& vector3) const
	{
		return { x * vector3.x, y * vector3.y, z * vector3.z };
	}

	constexpr inline Vector3 operator*(float scalar) const
	{
		return { x * scalar, y * scalar, z * scalar };
	}

	constexpr inline Vector3 operator/(const Vector3& vector3) const
	{
		return { x / vector3.x, y / vector3.y, z / vector3.z };
	}

	constexpr inline Vector3 operator+=(const Vector3& vector3)
	{
		return { x += vector3.x, y += vector3.y, z += vector3.z };
	}

	constexpr inline Vector3 operator-=(const Vector3& vector3)
	{
		return { x -= vector3.x, y -= vector3.y, z -= vector3.z };
	}

	constexpr inline Vector3 operator*=(const Vector3& vector3)
	{
		return { x *= vector3.x, y *= vector3.y, z *= vector3.z };
	}

	constexpr inline Vector3 operator*=(float scalar)
	{
		return { x *= scalar, y *= scalar, z *= scalar };
	}

	constexpr inline Vector3 operator/=(const Vector3& vector3)
	{
		return { x /= vector3.x, y /= vector3.y, z /= vector3.z };
	}

	constexpr inline Vector3 operator-() const
	{
		return { -x, -y, -z };
	}

public: // MEMBERS

	/// <summary>
	/// The x-value/component of a geometric three-dimensional vector.
	/// </summary>
	Radian x;

	/// <summary>
	/// The y-value/component of a geometric three-dimensional vector.
	/// </summary>
	Radian y;

	/// <summary>
	/// The z-value/component of a geometric three-dimensional vector.
	/// </summary>
	Radian z;
};

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

float		VectorMagnitude			(const Vector3& vector3);
float		DotProduct				(const Vector3& a, const Vector3& b);
Vector3		CrossProduct			(const Vector3& a, const Vector3& b);
Vector3		NormalizeVector			(const Vector3& vector3);
bool		VectorsAreEquivalent	(const Vector3& a, const Vector3& b);

#endif // !VECTOR3_HPP