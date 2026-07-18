#pragma once

#include <string>

class Target
{
private:
    int id;
    std::string type;

    double x;
    double y;

    double velocity;
    double heading;
    double altitude;

    std::string threatLevel;

public:
    Target(
        int id,
		std::string type,
        double x,
        double y,
		double velocity,
		double heading,
		double altitude,
		std::string threatLevel
    );

	int getId() const;
	std::string getType() const;
    double getX() const;
	double getY() const;
    double getVelocity() const;
    double getHeading() const;
	double getAltitude() const;
	std::string getThreatLevel() const;
};
