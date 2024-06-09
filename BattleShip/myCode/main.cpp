// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
#include "Board.h"
#include "ConsoleView.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "BattleShip started." << endl << endl;
	GridPosition gp("A1");
	cout<<gp.getColumn();
	Board b(10,10);
	ConsoleView cv(&b);
	cv.print();
	return 0;
}
