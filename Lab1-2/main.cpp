#include "includes.hpp"
#include "LegalEntity.hpp"
#include "IE.hpp"

unsigned TaxPayer::m_payers_number = 0;

int main()
{
	setlocale(0, "");

	std::vector<TaxPayer*> payers(20);
	payers.resize(5);

	payers.at(0) = new IndividualEntrepreneur();
	payers.at(1) = new IndividualEntrepreneur();
	payers.at(2) = new LegalEntity("������","0000-1234-0000",1000, "5622");
	payers.at(3) = new IndividualEntrepreneur("������", "0000-5793-1575", 500, "������������");
	payers.at(4) = new LegalEntity("���������", "2490-1234-8534", 3000, "12487");
	
	payers.at(0) = new LegalEntity();

	for (auto& payer : payers)
		payer->get_information();

	payers.at(0)->update_amount(750);
	payers.at(2)->update_amount(1250);

	for (auto& payer : payers)
		payer->get_information();

	payers.at(4)->update_amount(1750);

	for (auto& payer : payers)
		payer->get_information();
}