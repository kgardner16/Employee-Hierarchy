#include "CommissionEmployee.h"


//default constructor
CommissionEmployee::CommissionEmployee():Employee()
{
	//left empty
}

//custom constructor takes name, ssn, sales, and comission
CommissionEmployee::CommissionEmployee(string name, string SSN, double sales, double commission)
	:Employee(name, SSN), sales(sales), commission(commission) 
{
	// deliberately empty
	// cout << "CommissionEmployee(" << name << "," << SSN << "," << sales << "," << commission << ")\n"; 
}

//get_sales() - returns the sales
double CommissionEmployee::get_sales() const
{
	return sales;
}

//get_commission() - returns the commission percent
double CommissionEmployee::get_commission() const
{
	return commission;
}

//set_sales () - sets the sales
void CommissionEmployee::set_sales(double new_sales)
{
	sales = new_sales;
}

//set_commission() - sets the commission employee
void CommissionEmployee::set_commission(double new_commission)
{
	commission = new_commission;
}

//get_net_pay() - calculates commission employee net pay
double CommissionEmployee::get_net_pay() const
{
	return commission/100 * sales;
}


//print_check() - prints employee information, sales, and commission values
void CommissionEmployee::print_check() const
{
	Employee::print_check(); //uses base class printcheck to print employee info
    cout << "Commission Employee." << endl;
	cout << "Gross sales: " << sales << " Commission: " << commission << " Pay: " << get_net_pay() << endl;
    cout << "_________________________________________________\n";
}

//promptInput() - gathers input for name, ssn, sales, and commission
istream& CommissionEmployee::promptInput(istream& in, ostream& out)
{

	Employee::promptInput(in, out); //uses base class promptInput to input name and ssn
	out << "Enter sales and commission: ";
	in >> sales >> commission;
	return in;
	
}



