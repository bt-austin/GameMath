#ifndef VECTOR2_HPP
#define VECTOR2_HPP

//==========================================================================//
// TYPES																	//
//==========================================================================//

struct Vector2
{
public: // CONSTRUCTORS

	/// <summary>
	/// The default constructor for a vector object. This will set the
	/// x and y component to a zero vector.
	/// </summary>
	constexpr inline Vector2()
	{
		x = y = 0.0f;
	}

	/// <summary>
	/// The copy constructor that assigns two floats (both respectively named "x", and "y") to the
	/// x and y component of a two-dimensional vector.
	/// </summary>
	/// <param name="x">The "x" quantity to be assigned.</param>
	/// <param name="y">The "y" quantity to be assigned.</param>
	constexpr inline Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

public: // OPERATOR OVERLOADS

	constexpr inline Vector2& operator=(const Vector2& vector2)
	{
		x = vector2.x;
		y = vector2.y;
		return (*this);
	}

	constexpr inline Vector2& operator=(float default_vector_set)
	{
		x = default_vector_set;
		y = default_vector_set;
		return (*this);
	}

public: // MEMBERS

	/// <summary>
	/// The x-value/component of a geometric two-dimensional vector.
	/// </summary>
	float x;

	/// <summary>
	/// The y-value/component of a geometric two-dimensional vector.
	/// </summary>
	float y;
};

#endif // !VECTOR2_HPP