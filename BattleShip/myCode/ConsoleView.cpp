/*
 * ConsoleView.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "ConsoleView.h"
using namespace std;

ConsoleView::ConsoleView(Board *board): board{board}
{

}
/*
void ConsoleView::print()
{
	OwnGrid& ownGrid = board->getOwnGrid();;
	OpponentGrid& oppoGrid = board->getOpponentGrid();
	for(char i = 0; i< board->getRows(); i++)
	{
		cout<< i<<endl;
		for(int j = 0; j<board->getColumns(); j++)
		{
			cout<< j;
		}
	}
}
*/

void ConsoleView::print()
{
    OwnGrid& ownGrid = board->getOwnGrid();
    OpponentGrid& oppoGrid = board->getOpponentGrid();
    int rows = board->getRows();
    int cols = board->getColumns();

    // Print column headers
    cout << "   "; // For the initial space before column numbers
    for(int j = 0; j < cols; j++) {
        cout << j % 10 << " ";
    }
    cout << "    "; // Space between two grids
    for(int j = 0; j < cols; j++) {
        cout << j % 10 << " ";
    }
    cout << endl;


    // Print each row of both grids
    for(int i = 0; i < rows; i++) {
        // Print row header for own grid
        cout << (char)('A' + i) << " ";

        // Print own grid
        for(int j = 0; j < cols; j++) {
            cout << ownGrid.g << " ";
        }

        // Print row header for opponent grid
        cout << " " << (char)('A' + i) << " ";

        // Print opponent grid
        for(int j = 0; j < cols; j++) {
            cout << oppoGrid.getCell(i, j) << " ";
        }

        cout << endl;
    }
}

ConsoleView::~ConsoleView()
{
}

