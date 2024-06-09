/*
 * OwnGrid.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "OwnGrid.h"



OwnGrid::OwnGrid(int rows, int columns): rows{rows}, columns{columns}
{
}

int OwnGrid::getRows() const
{
	return rows;
}

int OwnGrid::getColumns() const
{
	return columns;
}

bool OwnGrid::placeShip(const Ship &ship)
{
	if(ship.isValid())
	{

	}
	return true;
}
/*
const std::vector<Ship> OwnGrid::getShips() const
{
}
*/
OwnGrid::~OwnGrid()
{
	// TODO Auto-generated destructor stub
}
