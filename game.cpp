#include<windows.h>
#include"game.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	std::cout << "Äîáðî ïîæàëîâàòü íà èíòåëëåêòóàëüíóþ èãðó!\nÊàê ÿ ìîãó ê âàì îáðàùàòüñÿ? ";
	std::string name = game::get_name();
	std::cout << "\nÏðèâåò, " << name << "!";
	std::cout << "\nÎòâå÷àéòå 'yes' åñëè ÷èñëî ÷¸òíîå, îòâå÷àéòå 'no' åñëè íåò.\n";
	for (int i = 0; i < 3; i++)
	{
		int q = game::rand_int(0, 100);
		std::cout << "×èñëî: " << q << "\n÷¸òíîå? - ";
		std::string answ = game::get_answ();
		std::string right;
		if (game::is_rigth(q, answ) == true)
		{
			std::cout << "Âåðíî!\n";
		}
		else
		{
			if (answ == "yes")
				right = "no";
			else
				right = "yes";
			std::cout << "'" << answ << "' íåïðàâèëüíûé îòâåò, ïðàâëüíûé îòâåò " << "'" << right << "'.\nÏîïðîáóéòå åù¸ ðàç, " << name << "!";
			return 0;
		}
	}
	std::cout << "Ïîçäðàâëÿþ, " << name << "!";
	return 0;
}
