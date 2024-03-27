
#include <iostream>													

using namespace std;													


template <class T>													
T maximum(T num1, T num2, T num3)											
{
	return (num1 > num2 && num1 > num3) ? num1 :									
		(num2 > num1 && num2 > num3) ? num2 : num3;								
}															


template <class T>													
T minimum(T num1, T num2, T num3)											
{
	return (num1 < num2 && num1 < num3) ? num1 :									
		(num2 < num1 && num2 < num3) ? num2 : num3;								
}															
	
	
int main()														
{

	int x;														
	int y;														
	int z;														

	cout << "\nEnter 3 integers > ";										
	cin >> x >> y >> z;												
	cout << "\n\tThe greater than the three is '" <<								
		maximum(x, y, z) << "'\n";

	cout << "\tThe least than the three is '" <<									
		minimum(x, y, z) << "'\n";

	cout << '\n';

	return 0;													
}
