/*
 * Ship.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "Ship.h"

Ship::Ship(const GridPosition &bow, const GridPosition &stern): bow{bow}, stern{stern}
{

}

bool Ship::isValid() const
{
	if(length() <=5 && length() >= 2){
		if(getBow().getRow() == getStern().getRow() ||
				getBow().getColumn() == getStern().getColumn())return true;
	}
	return false;

}

GridPosition Ship::getBow() const
{
	return bow;
}

GridPosition Ship::getStern() const
{
	return stern;
}

int Ship::length() const
{
	if(getBow().getRow() == getStern().getRow())
	{
		return(getStern().getColumn() - getBow().getColumn())+1;
	}
	else if(getBow().getColumn() == getStern().getColumn())
	{
		return(abs(getStern().getRow() - getBow().getRow()))+1;
	}
	return 0;
}

const std::set<GridPosition> Ship::occupiedArea() const
{
	std::set<GridPosition> occupiedArea;
	if(isValid()){
		if(getBow().getRow() == getStern().getRow())
			{
				for(int i=getBow().getColumn();i< getBow().getColumn()+length();i++){
					occupiedArea.insert(GridPosition(getBow().getRow(), i));
				}
			}
		else if(getBow().getColumn() == getStern().getColumn())
			{
				for(char i=getBow().getRow();i< getBow().getRow()+length();i++){
					occupiedArea.insert(i + std::to_string(getBow().getColumn()));
				}
			}
	}
	return occupiedArea;
}

//const std::set<GridPosition> Ship::blockedArea() const
//{
//}

Ship::~Ship()
{
}

