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
	payers.at(2) = new LegalEntity("Даниил","0000-1234-0000",1000, "5622");
	payers.at(3) = new IndividualEntrepreneur("Андрей", "0000-5793-1575", 500, "Метамфетамин");
	payers.at(4) = new LegalEntity("Станислав", "2490-1234-8534", 3000, "12487");
	
	payers.at(0) = new LegalEntity();


	std::vector<TaxPayer*>::iterator it{payers.begin()};
	while (it != payers.end())
	{
		auto temp = *it;
		temp->get_information();

		it++;
	}

	payers.at(0)->update_amount(750);
	payers.at(2)->update_amount(1250);

	

}