#include <iostream>
#include <vector>
#include <functional>
#include <stdexcept>
#include <cassert>

namespace jija {
	std::vector<int> map(const std::vector<int>& numbers, std::function<int(int)> func);
	std::vector<int> filter(const std::vector<int>& numbers, std::function<bool(int)> func);
	bool is_prime(int num);
	void tests();
}
