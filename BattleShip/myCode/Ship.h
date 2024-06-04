/*
 * Ship.h
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#ifndef SHIP_H_
#define SHIP_H_
#include <iostream>
#include <set>
#include "GridPosition.h"

class Ship
{
	GridPosition bow;
	GridPosition stern;
public:
	Ship(const GridPosition& bow, const GridPosition& stern);
	bool isValid() const;
	GridPosition getBow() const;
	GridPosition getStern() const;
	int length() const;
	const std::set<GridPosition> occupiedArea() const;
	const std::set<GridPosition> blockedArea() const;
	virtual ~Ship();
};

#endif /* SHIP_H_ */
