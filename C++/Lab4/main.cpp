#include "Bus.h"
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    std::string inputfile;
    std::cout << "Please, enter DB name:" << std::endl;
    inputfile = "/home/main/git/C_Plus_Lab/Lab4/input.txt";
    Bus *garage = new Bus();
    Bus *active = new Bus();
    //garage->open(inputfile);
    int num;
    char c;
    while (c != '~') {
        std::cout
                << "Выберите команду(r - считать DB, d - отправить в гараж, a - отправить на дорогу, p - показать, ~ - выйти): ";
        std::cin >> c;
        std::cout << std::endl;
        switch (c) {
            case 'r':
                std::cout << "Введите название текстового файла(/home/main/git/C_Plus_Lab/Lab4/input.txt)";
                std::cin >> inputfile;
                garage->open(inputfile);
                break;
            case 'd':
                std::cout << "Введите номер:" << std::endl;
                std::cin >> num;
                active->refresh(num, garage);
                break;
            case 'a':
                std::cout << "Введите номер:" << std::endl;
                std::cin >> num;
                garage->refresh(num, active);
                break;
            case 'p':
                std::cout << "В гараже сейчас:" << std::endl;
                garage->print();
                std::cout << "На маршруте сейчас:" << std::endl;
                active->print();
                break;
            case '~':
                exit(1);
                break;
        }
    }
    system("Pause");
}

/*int main()
{
	setlocale(LC_ALL, "RUS");
	std::string inputfile;
	std::cout << "Please, enter DB name:" << std::endl;
	inputfile = "/home/main/git/C_Plus_Lab/Lab4/input.txt";

	system("Pause");
	return 0;
}*/

