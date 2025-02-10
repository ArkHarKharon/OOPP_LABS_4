#pragma once

class ITaxPayer
{
public:
	void virtual get_information() = 0;

	virtual ~ITaxPayer()
	{

	}
};