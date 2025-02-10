#include "includes.hpp"
#include "LegalEntity.hpp"
#include "IE.hpp"

unsigned TaxPayer::m_payers_number = 0;

int main()
{
	setlocale(0, "");

	std::vector<TaxPayer*> payers(20);
	payers.resize(3);

	
	payers.at(0) = new LegalEntity("Даниил","0000-1234-0000",1000, "5622");
	payers.at(1) = new IndividualEntrepreneur("Андрей", "0000-5793-1575", 500, "Метамфетамин");
	payers.at(2) = new LegalEntity("Станислав", "2490-1234-8534", 3000, "12487");
	
	std::cout << "Изначальный массив: \n";
	std::vector<TaxPayer*>::iterator it{ payers.begin() };
	while (it != payers.end())
	{
		auto temp = *it;
		temp->get_information();

		it++;
	}

	std::cout << "\n\nМассив после добавления элемента в начало: \n";
	auto* temp_element = new LegalEntity();
	payers.emplace(payers.begin(), temp_element);
	it = payers.begin();
	while (it != payers.end())
	{
		auto temp = *it;
		temp->get_information();

		it++;
	}

	std::cout << "\n\nМассив после удавления элемента из начала: \n";
	payers.erase(payers.begin());
	it = payers.begin();
	while (it != payers.end())
	{
		auto temp = *it;
		temp->get_information();

		it++;
	}

	std::cout << "\n\nМинимальный элемент: \n";
	it = std::min_element(payers.begin(), payers.end());
	auto temp = *it;
	temp->get_information();



	std::cout << "\n\nРазвернутый вектор: \n";
	std::reverse(payers.begin(), payers.end());
	it = payers.begin();
	while (it != payers.end())
	{
		auto temp = *it;
		temp->get_information();

		it++;
	}
}