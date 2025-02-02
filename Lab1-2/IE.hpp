#pragma once
#include "TaxPayer.hpp"

class IndividualEntrepreneur : public TaxPayer
{
private:
	std::string m_business_type;

public:
	IndividualEntrepreneur() : TaxPayer(), m_business_type{ "None" }
	{

	}

	IndividualEntrepreneur(std::string name, std::string id, double amount, std::string type):
		TaxPayer(name, id, amount),
		m_business_type{ type }
	{

	}

	virtual ~IndividualEntrepreneur()
	{

	}

	virtual void get_information() override
	{
		std::cout
		<< "\t----���������� � �����������������----\n"
		<< "���: " << m_name << std::endl
		<< "ID: " << m_id << std::endl
		<< "����� � �������: " << m_amount << std::endl 
		<< "��� �������: " << m_business_type << std::endl 
		<< "����� ����� ������������������: " << m_payers_number << std::endl << std::endl;
	}
};