/*
 * OwnGrid.h
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#ifndef OWNGRID_H_
#define OWNGRID_H_
#include <iostream>
#include <vector>
#include "Ship.h"
class OwnGrid
{
	int rows;
	int columns;
	Ship ships;
public:
	OwnGrid(int rows, int columns);
	int getRows() const;
	int getColumns() const;
	bool placeShip(const Ship& ship);
	const std::vector<Ship> getShips() const;
	virtual ~OwnGrid();
};

#endif /* OWNGRID_H_ */
