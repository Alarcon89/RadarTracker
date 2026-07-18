#include "Radar.h"

void Radar::addTarget(const Target& target)
{
	targets.push_back(target);
}

int Radar::getTargetCount() const
{
	return targets.size();
}
