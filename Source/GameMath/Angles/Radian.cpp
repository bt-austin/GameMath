//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <GameMath/Angles/Radian.hpp>
#include <GameMath/Angles/Degree.hpp>
#include <GameMath/Private/Definitions.hpp>

//==========================================================================//
// FUNCTIONS																//
//==========================================================================//

bool RadiansAreEquivalent(const Radian& a, const Radian& b)
{
	return std::abs(a.x - b.x) <= EPSILON;
}

Radian DegreesToRadians(const Degree& degrees)
{
	return { degrees.x * PI / HALF_CIRCLE };
}