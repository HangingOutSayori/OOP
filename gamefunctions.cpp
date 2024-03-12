#include "game.h"
#include<random>
namespace game
{
	std::string get_name()
	{
		std::string Name;
		std::cin >> Name;
		return Name;
	}
	std::string get_answ()
	{
		std::string Answer;
		std::cin >> Answer;
		return Answer;
	}
	int rand_int(int start, int end)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(start, end);
		int x = dist(gen);
		return x;
	}

	bool is_even(int number) {
		if (number % 2 == 0)
			return true;
		else
			return false;
	}
	bool is_rigth(int number, std::string answer)
	{
		if (answer == "yes") {
			if (is_even(number)) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (answer == "no") {
			if (is_even(number)) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}
