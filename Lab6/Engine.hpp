#pragma once
#include "includes.hpp"

class Engine
{
private:
	float m_torque;
	float m_power;
	float m_fuel;   // расход на 100км

public:
	Engine(float torque = 0.0f, float power = 0.0f, float fuel = 0.0f):
		m_torque{torque},
		m_power{power},
		m_fuel{fuel}
	{

	}

	void torque_control(float adj)
	{
		m_torque += adj;
	}

	void power_control(float adj)
	{
		m_power += adj;
	}

	void fuel_control(float adj)
	{
		m_fuel += adj;
	}
};