#include <iostream>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::system("chcp 1251");

	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	std::cout << std::endl;

	std::cout << "Здравствуйте: " << name << " !" << std::endl;
}