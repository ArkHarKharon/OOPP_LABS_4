#include "includes.hpp"

void calculate(const std::vector<int>& a, std::vector<int>& b)
{
	for (size_t i = 0; i < a.size(); i++)
	{
		b.at(i) = a.at(i) * a.at(i);
	}
}

void task1()
{
	std::cout << "\t\tЗАДАНИЕ 1\n";
	std::vector<int> A{ 1,2,3,4,5,6,7,8,9 };
	std::vector<int> B(A.size());

	std::cout << "Запускаю отдельный поток...\n";
	std::thread th1(calculate,std::cref(A), std::ref(B));
	sleep(2);

	for (int element : A)
		std::cout << element << " ";

	std::cout << std::endl;

	for (int element : B)
		std::cout << element << " ";
	std::cout << std::endl;

	sleep(2);
	th1.join();
	std::cout << "Завершаю отдельный поток...\n";

	
}