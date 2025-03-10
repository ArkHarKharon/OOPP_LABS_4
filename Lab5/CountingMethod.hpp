#pragma once

#include <iostream>
#include <string>
#include <vector>

class ICountingMethod
{
public:
	virtual float count(float init_cost) = 0;

	virtual ~ICountingMethod() {}
};

class CountingMethod : public ICountingMethod
{
private:
	float (*m_counting_function)(float);

public:
	CountingMethod(float(*function)(float)) : m_counting_function{ function }
	{

	}

	~CountingMethod()
	{

	}

	float count(float init_count)
	{
		return m_counting_function(init_count);
	}
};


