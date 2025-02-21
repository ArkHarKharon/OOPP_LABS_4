#include "CostManager.hpp"

float student(float init_value)
{
	return 0.95 * init_value;
}

float veterans(float init_value)
{
	return 0.8 * init_value;
}


int main()
{
	setlocale(0, "");

	CostManager manager;
	float init_price = 1000.0f;

	std::cout << "Начальная цена: " << init_price << std::endl;

	manager.set_method(student);
	std::cout << "Цена со студенческой скидкой: " << manager.count_value(init_price) << std::endl;

	manager.set_method(veterans);
	std::cout << "Цена со скидкой для ветеранов: " << manager.count_value(init_price) << std::endl;

}