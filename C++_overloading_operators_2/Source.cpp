#include "Month.h"										



ostream& operator<<(ostream& ostr, Month& obj)							
{
	ostr << "\n" << obj.name << " is the " << obj.monthNum <<
		" month in the year\n";
	return ostr;
}

istream& operator>>(istream& istr, Month& obj)							
{
	cout << "\nEnter the number of the month> ";
	istr >> obj.monthNum;

	return istr;
}


int main()											
{

	Month m1("January");									
	Month m2(2);										
	Month* m3 = new Month;									




	m1.print();										
	m1 = ++m2;										
	m2.print();										

	m1--;											
	m1.print();										

	m3->set_monthNum();									
	--(*m3);										
	m3->print();										

	(*m3)++;										
	m3->print();										
	(*m3)--;										
	m3->print();										
	--(*m3);										
	m3->print();										

	cout << m1;										
	cin >> m1;										
	m1.print();										

	cout << *m3; 


		return 0;
}
