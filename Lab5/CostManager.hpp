#pragma once

#include "CountingMethod.hpp"


//Метод по умолчанию
float full(float init_value)
{
	return init_value;
}



class CostManager
{
private:
	CountingMethod m_method;

public:
	CostManager() : m_method{ full } {}
	~CostManager() {}

	void set_method(float (*method)(float))
	{
		CountingMethod temp(method);
		m_method = temp;
	}

	float count_value(float init_value)
	{
		return m_method.count(init_value);
	}

};