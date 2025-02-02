#pragma once
#include "TaxPayer.hpp"

class LegalEntity : public TaxPayer
{
private:
	std::string m_register_number;

public:
	LegalEntity() : TaxPayer(), m_register_number{ "0" }
	{

	}

	LegalEntity(std::string name, std::string id, double amount, std::string number) :
		TaxPayer(name, id, amount),
		m_register_number{ number }
	{

	}

	virtual ~LegalEntity()
	{

	}

	virtual void get_information() override
	{
		std::cout
			<< "\t----���������� � �����������������----\n"
			<< "���: " << m_name << std::endl
			<< "ID: " << m_id << std::endl
			<< "����� � �������: " << m_amount << std::endl
			<< "��������������� �����: " << m_register_number << std::endl 
			<< "����� ����� ������������������: " << m_payers_number << std::endl << std::endl;
	}
};