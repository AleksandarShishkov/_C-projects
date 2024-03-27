



#include <iostream>														
#include <stdlib.h>														

using namespace std;														




template <class T>														
T abs(T num)															
{
	return abs(num);													
}

int main()																			
{

	int x = 1;														


	while (x != 0)														
	{
		cout << "\n Enter an integher (type 0 to quit)> ";								
		cin >> x;

		if (x == 0)													
			continue;

		cout << "\nThe absolute value of " << x << " is '" << abs(x) << "'\n";						 
	}															

	cout << '\n';




	return 0;														
}
