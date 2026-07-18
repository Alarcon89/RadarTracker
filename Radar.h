#pragma once

#include <vector>
#include "Target.h"

class Radar
{
private:
	std::vector<Target> targets;

public: 
	void addTarget(const Target& target);
	int getTargetCount() const;
};
