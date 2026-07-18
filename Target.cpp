#include "Target.h"

//Constructor
Target::Target(
	int id,
	std::string type,
	double x,
	double y,
	double velocity,
	double heading,
	double altitude,
	std::string threatLevel

)
	: id(id),
	type(type),
	x(x),
	y(y),
	velocity(velocity),
	heading(heading),
	altitude(altitude),
	threatLevel(threatLevel)
{
}

// Getter for ID
int Target::getId() const 
{
	return id;
}
// Getter for Type
std::string Target::getType() const
{
	return type;
}
// Getter for X coordinate
double Target::getX() const
{
	return x;
}
// Getter for Y coordinate
double Target::getY() const
{
	return y;
}
// Getter for Velocity
double Target::getVelocity() const
{
	return velocity;
}
// Getter for Heading
double Target::getHeading() const
{
	return heading;
}
// Getter for Altitude
double Target::getAltitude() const
{
	return altitude;
}
// Getter for Threat Level
std::string Target::getThreatLevel() const
{
	return threatLevel;
}