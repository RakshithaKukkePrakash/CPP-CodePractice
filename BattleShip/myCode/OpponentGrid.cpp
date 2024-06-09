/*
 * OpponentGrid.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "OpponentGrid.h"


OpponentGrid::~OpponentGrid()
{
	// TODO Auto-generated destructor stub
}

OpponentGrid::OpponentGrid(int rows, int columns): rows{rows}, columns{columns}
{
}

int OpponentGrid::getRows() const
{
	return rows;
}

int OpponentGrid::getColumns() const
{
	return columns;
}
