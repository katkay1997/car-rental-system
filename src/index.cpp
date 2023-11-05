#include <iostream>
#include <ctime>

void greeting()
{
	//std::string car = " ";
	//std::cin >> car;

	std::cout << std::endl
			  << "------------------------------------------------------------------------------" << std::endl
			  << "Welcome to Lux Car Rentals! Giving you Premium experience with affordable prices!" << std::endl
			  << std::endl
			  << std::endl
			  << "For this Holiday season, customers have a 10% discount on selected vehicles. Discount ends soon!"
			  << std::endl
			  << "------------------------------------------------------------------------------" << std::endl
			  // std::cout << "You want the" << car;
			  << "What is your car of choice?" << std::endl
			  << std::endl
			  << "What is your price range?";
	// I can add clickable buttons (with car images) and these questions are asked about the images.
	// They click on the img button, and it takes them to another page.
}

void reservation()
{

}

void priceRange()
{
	double budget;
	std::cout << "Please enter your budget:";
	std::cin >> budget;
	if (budget <= 125)
	{
		std::cout << "These vehicles are available:" << std::endl
				  << "Hooptie";
	} else
	{
		std::cout << "please type your answer";
	}
	std::cout << std::endl
			  << std::endl
			  << std::endl
			  << "your budget is:" << budget;

}

/**
 * cc payment confirmation time stamp
 */
void paymentTime()
{
	time_t now = time(nullptr);
	char *dt = ctime(& now);
	std::cout << "Your payment for your reserved vehicle has been confirm on:" << std::endl
			  << dt;
}

int main()
{
	//greeting();
	std::cout << std::endl << std::endl << std::endl;
	//priceRange();
	std::cout << std::endl << std::endl << std::endl;
	paymentTime();

	return 0;
}
