#pragma once

#include "ITaxPayer.hpp"
#include "includes.hpp"


class TaxPayer : public ITaxPayer
{
protected:
	std::string m_name;					// ��� �����������������
	std::string m_id;					// ����������������� ����� �����������������
	double m_amount;					// ����� ������ � ������
	static unsigned m_payers_number;	// ����� ���������� ������������������

public:
	TaxPayer() :						// ����������� �����������
		m_name{"John Doe"},
		m_id{"0000-0000-0000"},
		m_amount{0.0}
	{
		m_payers_number++;
	}

	TaxPayer(std::string name, std::string id, double amount) :
		m_name{ name }, m_id{ id }, m_amount{ amount }
	{
		m_payers_number++;
	}

	TaxPayer(TaxPayer& payer)
	{
		m_name = payer.m_name;
		m_id = payer.m_id;
		m_amount = payer.m_amount;
	}

	TaxPayer& operator= (const TaxPayer& payer)
	{
		m_name = payer.m_name;
		m_id = payer.m_id;
		m_amount = payer.m_amount;

		return *this;
	}

	virtual ~TaxPayer()
	{

	}

	virtual void get_information() = 0;
	
	void update_amount(double amount)
	{
		m_amount = amount;
	}

	static unsigned get_payers_number()
	{
		return m_payers_number;
	}
		
};





/*
{
	std::cout
	<< "/t----���������� � �����������������----\n"
	<< "���: " << m_name << std::endl
	<< "ID: " << m_id << std::endl
	<< "����� � �������: " << m_amount << std::endl << std::endl
	<< "����� ����� ������������������: " << m_payers_number << std::endl;
}
*/ 