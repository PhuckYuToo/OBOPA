#pragma once

#include <vector>

class Student
{
public:
	std::string naam;

	Student(std::string name) : naam(name)
	{
		
	}

private:
	std::int16_t EC;
};