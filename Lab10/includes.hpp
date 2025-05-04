#pragma once

#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

void sleep(int duration) {
	// simulate expensive operation
	std::this_thread::sleep_for(std::chrono::seconds(duration));
}