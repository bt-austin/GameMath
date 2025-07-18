#ifndef VECTOR2_HPP
#define VECTOR2_HPP

//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <GameMath/Angles/Degree.hpp>
#include <GameMath/Angles/Radian.hpp>

//==========================================================================//
// TYPES																	//
//==========================================================================//

struct Vector2
{
public: // CONSTRUCTORS

	constexpr inline Vector2()
	{
		x = y = 0.0f;
	}

	constexpr inline Vector2(const Degree& x, const Degree& y)
	{
		this->x = x.x;
		this->y = y.x;
	}


	constexpr inline Vector2(const Vector2& vector2)
	{
		this->x = vector2.x;
		this->y = vector2.y;
	}

	constexpr inline Vector2(const Radian& x, const Radian& y)
	{
		this->x = x.x;
		this->y = y.x;
	}

public: // OPERATOR OVERLOADS

	constexpr inline Vector2& operator=(const Degree& default_vector_set)
	{
		x = DegreesToRadians(default_vector_set.x);
		y = DegreesToRadians(default_vector_set.x);
		return (*this);
	}

	constexpr inline Vector2& operator=(const Vector2& vector2)
	{
		x = vector2.x;
		y = vector2.y;
		return (*this);
	}

	constexpr inline Vector2 operator+(const Vector2& vector2) const
	{
		return { x + vector2.x, y + vector2.y };
	}

	constexpr inline Vector2 operator-(const Vector2& vector2) const
	{
		return { x - vector2.x, y - vector2.y };
	}

	constexpr inline Vector2 operator*(const Vector2& vector2) const
	{
		return { x * vector2.x, y * vector2.y };
	}

	constexpr inline Vector2 operator*(float scalar) const
	{
		return { x * scalar, y * scalar };
	}

	constexpr inline Vector2 operator/(const Vector2& vector2) const
	{
		return { x / vector2.x, y / vector2.y };
	}

	constexpr inline Vector2 operator+=(const Vector2& vector2)
	{
		return { x += vector2.x, y += vector2.y };
	}

	constexpr inline Vector2 operator-=(const Vector2& vector2)
	{
		return { x -= vector2.x, y -= vector2.y };
	}

	constexpr inline Vector2 operator*=(const Vector2& vector2)
	{
		return { x *= vector2.x, y *= vector2.y };
	}

	constexpr inline Vector2 operator*=(float scalar)
	{
		return { x *= scalar, y *= scalar };
	}

	constexpr inline Vector2 operator/=(const Vector2& vector2)
	{
		return { x /= vector2.x, y /= vector2.y };
	}

	constexpr inline Vector2 operator-() const
	{
		return { -x, -y };
	}

public: // MEMBERS

	/// <summary>
	/// The x-value/component of a geometric two-dimensional vector.
	/// </summary>
	Radian x;

	/// <summary>
	/// The y-value/component of a geometric two-dimensional vector.
	/// </summary>
	Radian y;
};

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

float		VectorMagnitude(const Vector2& vector2);
float		DotProduct(const Vector2& a, const Vector2& b);
Vector2		NormalizeVector(const Vector2& vector2);
bool		VectorsAreEquivalent(const Vector2& a, const Vector2& b);

#endif // !VECTOR2_HPP