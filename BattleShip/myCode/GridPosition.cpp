/*
 * GridPosition.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "GridPosition.h"
#include <sstream>
#include <string>
#include <sstream>
using namespace std;
GridPosition::GridPosition(char row, int column): row{0}, column{0}
{
}

GridPosition::GridPosition(std::string position)
{
	string strCol;
	for(auto itr= position.begin(); itr!= position.end();itr++){
		if(*itr >= 'A' && *itr <= 'Z'){
			row = *itr;
			cout<< "Row: "<<row <<endl;
		}
		else if(isdigit(*itr))
		{
			strCol += *itr;

		}
	}
	istringstream(strCol) >>column;
	cout<< "Col: "<<  column<<endl;

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
	std::string concatOp;
	return (row+ std::to_string(column));
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

