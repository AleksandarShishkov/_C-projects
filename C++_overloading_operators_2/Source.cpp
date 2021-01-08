#include "Month.h"										// including the Month header file



ostream& operator<<(ostream& ostr, Month& obj)							// defining the ostream '>>' operator
{
	ostr << "\n" << obj.name << " is the " << obj.monthNum <<
		" month in the year\n";
	return ostr;
}

istream& operator>>(istream& istr, Month& obj)							// defining the istream '<<' operator
{
	cout << "\nEnter the number of the month> ";
	istr >> obj.monthNum;

	return istr;
}


int main()											// the main() function
{

	Month m1("January");									// an instance for Month class with parameter for the name of the month
	Month m2(2);										// an instance for the Month class with parameter for the number of the month
	Month* m3 = new Month;									// a pointer which points to an instance of the Month class




	m1.print();										// printing the result for m1
	m1 = ++m2;										// testing the prefix '++' operator on m2
	m2.print();										// printing the result for m2

	m1--;											// testing the postfix '--' operator on m1
	m1.print();										// printing the result for m1

	m3->set_monthNum();									// setting the name for *m3
	--(*m3);										// testing the prefix '--' operator on *m3
	m3->print();										// printing the result

	(*m3)++;										// testing the posfix '++' operator on *m3
	m3->print();										// printing the result
	(*m3)--;										// testing the posfix '--' operator on *m3
	m3->print();										// printing the result
	--(*m3);										// testing the prefix '--' operator on *m3
	m3->print();										// printing the result

	cout << m1;										// testing the ostream '<<' operator on m1
	cin >> m1;										// testing the istream '>>' operator on m1
	m1.print();										// printing the result

	cout << *m3; / testing the ostream '<<' operator on * m3


		return 0;
}