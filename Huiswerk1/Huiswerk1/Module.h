#pragma once

#include <vector>

class Module
{
public:
	std::string naam;
	std::int16_t ec;

	Module(std::string name, std::int16_t ecs) : naam(name), ec(ecs)
	{

	}
};