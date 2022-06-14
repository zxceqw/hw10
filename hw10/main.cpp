#include "human.h"


Human::Human(int age, std::string surname, std::string name, std::string midname)
{
	this->age = age;
	this->surname = surname;
	this->name = name;
	this->midname = midname;
}

Student::Student(int age, std::string surname, std::string name, std::string midname, bool on_lesson)
{
	this->age = age;
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->on_lesson = on_lesson;
}

void Student::Print()
{
	std::cout << "Student's surname: " << "\t" << this->surname << std::endl;
	std::cout << "Student's name: " << "\t" << this->name << std::endl;
	std::cout << "Student's midname: " << "\t" << this->midname << std::endl;
	std::cout << "Student's age: " << "\t\t" << this->age << std::endl;
	std::cout << "Student's presence: ";
	if (this->on_lesson)
		std::cout << "\t" << "yes";
	else
		std::cout << "\t" << "No";
	std::cout << "\n\n";
}

Boss::Boss(int age, std::string surname, std::string name, std::string midname, int number_of_workers)
{
	this->age = age;
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->number_of_workers = number_of_workers;
}

void Boss::Print()
{
	std::cout << "Boss's surname: " << "\t" << this->surname << std::endl;
	std::cout << "Boss's name: " << "\t\t" << this->name << std::endl;
	std::cout << "Boss's midname: " << "\t" << this->midname << std::endl;
	std::cout << "Boss's age: " << "\t\t" << this->age << std::endl;
	std::cout << "Number of workers: " << "\t" << this->number_of_workers << std::endl << std::endl;
}

