#include "company.h"
#include <iostream>
using namespace std;

void Company::inputEmployeeHead(int total_num)
{
	for (int i = 0; i < total_num; i++)
	{
		Employee employee;
		employee.input(i);
		container.addHead(employee);
	}
}

void Company::inputEmployeeTail(int total_num)
{
	for (int i = 0; i < total_num; i++)
	{
		Employee employee;
		employee.input(i);
		container.addTail(employee);
	}
}

void Company::findBestPaid()
{
	bestPaid = Employee();
	ListTemp<Employee>::Iterator curr = container.Begin();
	while (!(curr == container.End()))
	{
		if (*curr > bestPaid)
			bestPaid = *curr;
		curr++;
	}
}

void Company::printBestPaid() const
{
	cout << "The best-paid employee and gross pay: " << endl;
	bestPaid.output();
} // printBestPaid
