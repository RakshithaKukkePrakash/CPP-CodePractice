/*
 * GridPosition.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "GridPosition.h"


GridPosition::GridPosition(char row, int column): row{0}, column{0}
{
}

GridPosition::GridPosition(std::string position)
{
	row = position[0];
	column =
}

bool GridPosition::isValid() const
{
	if(row<= 'Z' || row>='A' && column>0){
		return true;
	}
	return false;
}

char GridPosition::getRow() const
{
	return row;
}

int GridPosition::getColumn() const
{
	return column;
}

GridPosition::operator std::string() const
{

}

bool GridPosition::operator ==(GridPosition other) const
{
	if(other.row == row && other.column == column){
		return true;
	}
	return false;
}

bool GridPosition::operator <(GridPosition other) const
{
	if(other.row < row && other.column < column){
		return true;
	}
	return false;
}

GridPosition::~GridPosition()
{
}

