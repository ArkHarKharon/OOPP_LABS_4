#include "includes.hpp"

void info(std::thread::id id, std::size_t iterator)
{
	std::cout << "�����: ID: " << id << ", ��������: " << iterator << std::endl;
}

void temp()
{

}

void task2()
{
	std::cout << "\t\t������� 3\n";
	int thread_count = 5;

	for (size_t i = 0; i < thread_count; i++)
	{
		std::thread thread(temp);
		info(thread.get_id(), i);
		thread.join();
	}
}