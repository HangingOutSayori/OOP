#include<windows.h>
#include"igra.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	std::cout << "Добро пожаловать на интеллектуальную игру!\nКак я могу к вам обращаться? ";
	std::string name = game::get_name();
	std::cout << "\nПривет, " << name << "!";
	std::cout << "\nОтвечайте 'yes' если число чётное, отвечайте 'no' если нет.\n";
	for (int i = 0; i < 3; i++)
	{
		int q = game::rand_int(0, 100);
		std::cout << "Число: " << q << "\nчётное? - ";
		std::string answ = game::get_answ();
		std::string right;
		if (game::is_rigth(q, answ) == true)
		{
			std::cout << "Верно!\n";
		}
		else
		{
			if (answ == "yes")
				right = "no";
			else
				right = "yes";
			std::cout << "'" << answ << "' неправильный ответ, правльный ответ " << "'" << right << "'.\nПопробуйте ещё раз, " << name << "!";
			return 0;
		}
	}
	std::cout << "Поздравляю, " << name << "!";
	return 0;
}