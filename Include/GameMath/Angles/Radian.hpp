#ifndef RADIAN_HPP
#define RADIAN_HPP

//==========================================================================//
// CLASSES																	//
//==========================================================================//

#ifndef DEGREE_HPP
	struct Degree;
#endif // !DEGREE_HPP

struct Radian
{
public: // CONSTRUCTORS

	constexpr inline Radian()
	{
		x = 0.0f;
	}

	constexpr inline Radian(float x)
	{
		this->x = x;
	}

	constexpr inline Radian(const Radian& degree)
	{
		x = degree.x;
	}

public: // OPERATOR OVERLOADS

	constexpr inline Radian& operator=(float radian)
	{
		x = radian;
		return (*this);
	}

	constexpr inline Radian& operator=(const Radian& radian)
	{
		x = radian.x;
		return (*this);
	}

	constexpr inline Radian operator+(float radian) const { return { x + radian }; }
	constexpr inline Radian operator-(float radian) const { return { x - radian }; }
	constexpr inline Radian operator*(float radian) const { return { x * radian }; }
	constexpr inline Radian operator/(float radian) const { return { x / radian }; }

	constexpr inline Radian operator+(const Radian& radian) const { return { x + radian.x }; }
	constexpr inline Radian operator-(const Radian& radian) const { return { x - radian.x }; }
	constexpr inline Radian operator*(const Radian& radian) const { return { x * radian.x }; }
	constexpr inline Radian operator/(const Radian& radian) const { return { x / radian.x }; }

	constexpr inline Radian operator+=(float radian) { return { x += radian }; }
	constexpr inline Radian operator-=(float radian) { return { x -= radian }; }
	constexpr inline Radian operator*=(float radian) { return { x *= radian }; }
	constexpr inline Radian operator/=(float radian) { return { x /= radian }; }

	constexpr inline Radian operator+=(const Radian& radian) { return { x += radian.x }; }
	constexpr inline Radian operator-=(const Radian& radian) { return { x -= radian.x }; }
	constexpr inline Radian operator*=(const Radian& radian) { return { x *= radian.x }; }
	constexpr inline Radian operator/=(const Radian& radian) { return { x /= radian.x }; }

	constexpr inline Radian operator-() const { return -x; }

public: // MEMBERS

	/// <summary>
	/// The angle of x in radians (implied...)
	/// </summary>
	float x;

};

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

bool			RadiansAreEquivalent		(const Radian& a, const Radian& b);
Radian			DegreesToRadians			(const Degree& degrees);

#endif // !RADIAN_HPP