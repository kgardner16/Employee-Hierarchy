//#pragma once
#include <iostream>
#include "Employee.h"

#ifndef _COMMISSION_H
#define _COMMISSION_H

class CommissionEmployee : public Employee
{
public:
	
	//Constructors
	CommissionEmployee();
	CommissionEmployee(string name, string SSN, double sales, double commission);

	//Accessors
	double get_sales() const;
	double get_commission() const;

	//Mutators
	void set_sales(double new_sales);
	void set_commission(double new_commission);

	//Virtual Functions
	virtual double get_net_pay() const;
    virtual void print_check( ) const;
	virtual istream& promptInput(istream& in, ostream& out);


private:
	double sales;
	double commission;

};
#endif // _COMMISSION_H

