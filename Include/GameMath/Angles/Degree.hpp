#ifndef DEGREE_HPP
#define DEGREE_HPP

//==========================================================================//
// CLASSES																	//
//==========================================================================//

#ifndef RADIAN_HPP
	struct Radian;
#endif // !RADIAN_HPP

struct Degree
{
public: // CONSTRUCTORS

	constexpr inline Degree()
	{
		x = 0.0f;
	}

	constexpr inline Degree(float x)
	{
		this->x = x;
	}

	constexpr inline Degree(const Degree& degree)
	{
		x = degree.x;
	}

public: // OPERATOR OVERLOADS

	constexpr inline Degree& operator=(float degree)
	{
		x = degree;
		return (*this);
	}

	constexpr inline Degree& operator=(const Degree& degree)
	{
		x = degree.x;
		return (*this);
	}

	constexpr inline Degree operator+(float degree) const { return { x + degree }; }
	constexpr inline Degree operator-(float degree) const { return { x - degree }; }
	constexpr inline Degree operator*(float degree) const { return { x * degree }; }
	constexpr inline Degree operator/(float degree) const { return { x / degree }; }

	constexpr inline Degree operator+(const Degree& degree) const { return { x + degree.x }; }
	constexpr inline Degree operator-(const Degree& degree) const { return { x - degree.x }; }
	constexpr inline Degree operator*(const Degree& degree) const { return { x * degree.x }; }
	constexpr inline Degree operator/(const Degree& degree) const { return { x / degree.x }; }

	constexpr inline Degree operator+=(float degree) { return { x += degree }; }
	constexpr inline Degree operator-=(float degree) { return { x -= degree }; }
	constexpr inline Degree operator*=(float degree) { return { x *= degree }; }
	constexpr inline Degree operator/=(float degree) { return { x /= degree }; }

	constexpr inline Degree operator+=(const Degree& degree) { return { x += degree.x }; }
	constexpr inline Degree operator-=(const Degree& degree) { return { x -= degree.x }; }
	constexpr inline Degree operator*=(const Degree& degree) { return { x *= degree.x }; }
	constexpr inline Degree operator/=(const Degree& degree) { return { x /= degree.x }; }

	constexpr inline Degree operator-() const { return -x; }

public: // MEMBERS

	/// <summary>
	/// The angle of x in degrees (implied...)
	/// </summary>
	float x;
};

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

bool			DegreesAreEquivalent	(const Degree& a, const Degree& b);
Degree			NormalizeAngle			(const Degree& degree);
Degree			RadiansToDegrees		(const Radian& radians);

#endif // !DEGREE_HPP