/*
 * OpponentGrid.h
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#ifndef OPPONENTGRID_H_
#define OPPONENTGRID_H_
#include "Ship.h"
class OpponentGrid
{
	int rows;
	int columns;
//	Ship sunkenShips;
public:
	OpponentGrid(int rows, int columns);
	int getRows() const;
	int getColumns() const;
	virtual ~OpponentGrid();
};

#endif /* OPPONENTGRID_H_ */
