#include <iostream>
#include "employee.h"
using namespace std;

Employee::Employee()
{
   name = "";
   grossPay = 0;
} // default constructor


void Employee::input(int id)
{
	srand((unsigned int)time(NULL));
	this->name = "employee" + to_string(id);
	this->grossPay = rand() % 16 + 6000;
} // input


void Employee::output() const
{
	cout << "name: " << name << "; gross pay: " << grossPay << endl;
} // output

void Employee::operator=(const Employee &otherEmployee)
{
	name = otherEmployee.name;
	grossPay = otherEmployee.grossPay;
}

bool Employee::operator>(const Employee &otherEmployee) const
{
   return grossPay > otherEmployee.grossPay;
} // compare

string Employee::getName() const
{
	return name;
}