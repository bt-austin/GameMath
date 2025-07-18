//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <GameMath/Vectors/Vector2.hpp>
#include <GameMath/Private/Definitions.hpp>

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

float VectorMagnitude(const Vector2& vector2)
{
	return std::sqrt(vector2.x * vector2.x + vector2.y * vector2.y);
}

float DotProduct(const Vector2& a, const Vector2& b)
{
	return a.x * b.x + a.y * b.y;
}

Vector2	NormalizeVector(const Vector2& vector2)
{
	float length = std::sqrt(vector2.x * vector2.x + vector2.y * vector2.y);

	if (length == 0.0f)
	{
		// Return a negative vector to avoid division be zero error...
		return { -1.0f, -1.0f };
	}

	return { vector2.x / length, vector2.y / length };
}

bool VectorsAreEquivalent(const Vector2& a, const Vector2& b)
{
	// A high-precision comparision. Adjust to your liking!!!
	constexpr float	EPSILON	= 1.0e-8f;

	bool x_test_passed = std::abs(a.x - b.x) <= EPSILON;
	bool y_test_passed = std::abs(a.y - b.y) <= EPSILON;

	return x_test_passed && y_test_passed;
}