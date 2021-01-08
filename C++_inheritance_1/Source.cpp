#include "TwoDayPackage.h"
#include "OvernightPackage.h"



int main()
{

	TwoDayPackage deliveryTDP1(4.12, "Andrew Simmons", "Lindsey Lime", "Flat 10, 1st Str",				// TDP obj1 with parameters
		"Flat 1, 2nd Str");
	TwoDayPackage* deliveryTDP2 = new TwoDayPackage;								// a pointer to TDP obj2 

	OvernightPackage delivery_OP1(15.20, "Samantha Andrews", "Leam Lee", "Flat 2, 3rd Str",				// OP obj1 with parameters
		"Flat 15, 4th Str");
	OvernightPackage delivery_OP2[2];										// an array of 2 OP objs


	// using TDP obj1

	cout << "\n\nTDP obj1\n";

	// setting the details for the sender
	deliveryTDP1.set_city_s();
	deliveryTDP1.set_state_s();
	deliveryTDP1.set_ZIP_s();
	deliveryTDP1.set_weight_package();
	deliveryTDP1.set_cost_per_kg();

	// setting the details for the recipient
	deliveryTDP1.set_city_r();
	deliveryTDP1.set_state_r();
	deliveryTDP1.set_ZIP_r();




	//using TDP obj2

	cout << "\n\nTDP obj2\n";
	// setting the details for the sender
	deliveryTDP2->set_name_s();
	deliveryTDP2->set_address_s();
	deliveryTDP2->set_city_s();
	deliveryTDP2->set_state_s();
	deliveryTDP2->set_ZIP_s();
	deliveryTDP2->set_weight_package();
	deliveryTDP2->set_flat_fee();
	deliveryTDP2->set_cost_per_kg();

	// setting the details for the recipient
	deliveryTDP2->set_name_r();
	deliveryTDP2->set_address_r();
	deliveryTDP2->set_city_r();
	deliveryTDP2->set_state_r();
	deliveryTDP2->set_ZIP_r();





	//using OP obj1

	cout << "\n\nOP obj1\n";
	// setting the details for the sender
	delivery_OP1.set_city_s();
	delivery_OP1.set_state_s();
	delivery_OP1.set_ZIP_s();
	delivery_OP1.set_weight_package();
	delivery_OP1.set_cost_per_kg();

	// setting the details for the recipient
	delivery_OP1.set_city_r();
	delivery_OP1.set_state_r();
	delivery_OP1.set_ZIP_r();






	//printing the results
	cout << "\n\nTDP obj1\n";
	deliveryTDP1.print();


	cout << "\n\nTDP obj2\n";
	deliveryTDP2->print();



	cout << "\n\nOP obj1\n";
	delivery_OP1.print();


	//using OP obj2`s array

	cout << "\n\nOP obj2\n";

	for (int i = 0; i < 2; i++)											// using for loop for setting the data
	{														// setting the details for the sender

		cout << "\nPackage " << i + 1 << '\n';

		delivery_OP2[i].set_name_s();
		delivery_OP2[i].set_address_s();
		delivery_OP2[i].set_city_s();
		delivery_OP2[i].set_state_s();
		delivery_OP2[i].set_ZIP_s();
		delivery_OP2[i].set_weight_package();
		delivery_OP2[i].set_cost_per_kg();
		delivery_OP2[i].set_fee_delivery();


		// setting the details for the recipient
		delivery_OP2[i].set_name_r();
		delivery_OP2[i].set_address_r();
		delivery_OP2[i].set_city_r();
		delivery_OP2[i].set_state_r();
		delivery_OP2[i].set_ZIP_r();

		delivery_OP2[i].print();

		delivery_OP2[i].nextPackage();

	}






	return 0;
}
