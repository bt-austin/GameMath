//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <GameMath/Angles/Degree.hpp>
#include <GameMath/Angles/Radian.hpp>
#include <GameMath/Private/Definitions.hpp>

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

bool DegreesAreEquivalent(const Degree& a, const Degree& b)
{
	return std::abs(a.x - b.x) <= EPSILON;
}

Degree NormalizeAngle(const Degree& degree)
{
	Degree normal = std::fmod(degree.x, FULL_CIRCLE);
	normal = std::fmod((normal + FULL_CIRCLE).x, FULL_CIRCLE);
	return normal;
}

Degree RadiansToDegrees(const Radian& radians)
{
	return { radians.x * HALF_CIRCLE / PI };
}