// RadarTracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Target.h"
#include "Radar.h"

int main()
{
	//Create a Target object
	Target target1(
		1,
		"Aircraft",
		100.0,
		50.0,
		250.0,
		90.0,
		30000.0,
		"Low"
	
	);

	Radar radar;

	radar.addTarget(target1);

	std::cout << "========================================\n";
	std::cout << "      RADAR TRACKING SIMULATION\n";
	std::cout << "========================================\n\n";

	std::cout << "Target Successfully Created!\n\n";

	std::cout << "ID:" << target1.getId() << '\n';
	std::cout << "Type:" << target1.getType() << '\n';
	std::cout << "X Coordinate:" << target1.getX() << '\n';
	std::cout << "Y Coordinate:" << target1.getY() << '\n';
	std::cout << "Velocity:" << target1.getVelocity() << '\n';
	std::cout << "Heading:" << target1.getHeading() << " degrees\n";
	std::cout << "Altitude:" << target1.getAltitude() << " ft\n";
	std::cout << "Threat Level:" << target1.getThreatLevel() << '\n';
	std::cout << "\nTargets Tracked: " << radar.getTargetCount() << '\n';

	return 0;
}
