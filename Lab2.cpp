/*
Lab 2
Tony Gill
January 19, 2019

Algorithm was designed in the following series of steps:
1) Use existing information in the question to generate variables for paint per gallon & total surface of the wooden fence
2) Declare & initialize the paint per gallon and total surface of fence as double taking into account that 2 coats are needed (Therefore multiply total surface by 2)
3) To determine gallons of paint needed for the fence divide total fence surface by paint per gallon
4) Output all variables and result with approximation of paint gallons needed as double

Functions/Formulas:
formula for total surface coverage (in square ft) = 6ft (high) * 100ft (long) * 2
where 2 represents the the two coats of paint needed for fence surface

Function in this case was only the main function with all data, formulas and output


Revision History:
January 12, 2019: First working edition created, revised and completed


*/

#include <iostream>
using namespace std;


int main()
{
	// This is the amount of paint covered per gallon in sq. feet
	double paintPerGallon = 340;

	// This is the total area of the wooden fence multiplied by 2 to cover the total area twice also in sq. feet
	double totalFenceSurface = 6 * 100 * 2;

	// This is the total amount of paint in gallons needed to cover the wooden fence with 2 coats of paints
	double paintRequired = totalFenceSurface / paintPerGallon;

	// This outputs the approximation of gallons required to paint the wooden fence with 2 coats of paint
	cout << "If one gallon of paint can cover: " << paintPerGallon << " square feet" << endl;;

	// This outputs the total surface area for the wooden fence taking the second coat into account
	cout << "\nThen a wooden fence total surface painted twice is: " << totalFenceSurface << " square feet" << endl;

	// This outputs the approximation of gallons required to paint the wooden fence with 2 coats of paint
	cout << "\nThus amount of paint in gallons needed to paint the fence is: " << paintRequired << " gallons" << endl;


	return 0;
}

