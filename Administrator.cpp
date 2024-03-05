#include <iostream>
#include "Administrator.h"

using namespace std;

//default constructor
Administrator::Administrator():SalariedEmployee()
{
	//left empty
}

//custom constructor takes name, ssn, salary, title. and bonus
Administrator::Administrator(string name, string SSN, double salary, string title, double bonus)
	:SalariedEmployee(name, SSN, salary), title(title), bonus(bonus) 
{
	// deliberately empty
	// cout << "Adminstrator(" << name << "," << SSN << "," << salary << "," << title << ")\n"; 
}

//set_title() - sets job title
void Administrator::set_title(string new_title)
{
	title = new_title;
}

//set_bonus() - sets bonus value
void Administrator::set_bonus(double new_bonus)
{
	bonus = new_bonus;
}

//gete_title() - returns job title
string Administrator::get_title() const
{
	return title;
}

//get_bonus() - returns bonus value
double Administrator::get_bonus() const
{
	return bonus;
}

//get_net_pay() - returns net pay, which equals salary + bonus
double Administrator::get_net_pay() const
{
	return get_salary() + bonus;
}

//print_check() - prints employee information 
void Administrator::print_check() const
{
	SalariedEmployee::print_check(); //calls salaried employee print check to print salary + name and ssn 
	cout << "Administrator Title: " << title << endl;
	cout <<"Bonus: " << bonus << " Pay: " << get_net_pay() << endl;
	cout << "_________________________________________________\n";
}

//promptInput() - allows user to input employee information
istream& Administrator::promptInput(istream& in, ostream& out)
{
	SalariedEmployee::promptInput(in, out);
	out << "Enter bonus and title: ";
	in >> bonus;
	ignorespace(in); //ignorespace function allows use of getline in the next line without whitespace confusion
	getline(in, title); //getline allows for multiple words to be read in for the title
	return in;
}
