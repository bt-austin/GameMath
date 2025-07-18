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
	return std::sqrt(vector2.x.x * vector2.x.x + vector2.y.x * vector2.y.x);
}

float DotProduct(const Vector2& a, const Vector2& b)
{
	return a.x.x * b.x.x + a.y.x * b.y.x;
}

Vector2	NormalizeVector(const Vector2& vector2)
{
	float length = std::sqrt(vector2.x.x * vector2.x.x + vector2.y.x * vector2.y.x);

	if (length == 0.0f)
	{
		// Return a negative vector to avoid division be zero error...
		return { };
	}

	return { vector2.x / length, vector2.y / length };
}

bool VectorsAreEquivalent(const Vector2& a, const Vector2& b)
{
	bool x_test_passed = std::abs(a.x.x - b.x.x) <= EPSILON;
	bool y_test_passed = std::abs(a.y.x - b.y.x) <= EPSILON;

	return x_test_passed && y_test_passed;
}