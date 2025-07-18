#ifndef DEFINITIONS_HPP
#define DEFINITIONS_HPP

//==========================================================================//
// INCLUDES																	//
//==========================================================================//

#include <cmath>
#include <initializer_list>
#include <numbers>

//==========================================================================//
// CONSTANTS																//
//==========================================================================//

// Only enough for single-precision!
static constexpr float EPSILON			= 1.0e-4f;

// Famous constant to 16-digits...
static constexpr float PI				= 3.14159265f;

// The degrees of a half-circle.
static constexpr float HALF_CIRCLE		= 180.0f;

// The degrees of a circle.
static constexpr float FULL_CIRCLE		= 360.0f;

#endif // !DEFINITIONS_HPP