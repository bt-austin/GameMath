//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <GameMath/Vectors/Vector3.hpp>
#include <GameMath/Private/Definitions.hpp>

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//


float VectorMagnitude(const Vector3& vector3)
{
	return std::sqrt((vector3.x * vector3.x + vector3.y * vector3.y + vector3.z * vector3.z).x);
}

float DotProduct(const Vector3& a, const Vector3& b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z).x;
}

Vector3	CrossProduct(const Vector3& a, const Vector3& b)
{
	return
	{
		(a.y * b.z) - (a.z * b.y),
		(a.z * b.x) - (a.x * b.z),
		(a.x * b.y) - (a.y * b.x)
	};
}

Vector3 NormalizeVector(const Vector3& vector3)
{
	float length = std::sqrt((vector3.x * vector3.x + vector3.y * vector3.y + vector3.z * vector3.z).x);

	if (length == 0.0f)
	{
		// Return a negative vector to avoid division be zero error...
		return { };
	}

	return { vector3.x / length, vector3.y / length, vector3.z / length };
}

bool VectorsAreEquivalent(const Vector3& a, const Vector3& b)
{
	bool x_test_passed = std::abs((a.x - b.x).x) <= EPSILON;
	bool y_test_passed = std::abs((a.y - b.y).x) <= EPSILON;
	bool z_test_passed = std::abs((a.z - b.z).x) <= EPSILON;

	return x_test_passed && y_test_passed && z_test_passed;
}